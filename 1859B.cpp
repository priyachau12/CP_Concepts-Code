#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  long long global_minimum = 1e9 + 5;
  vector<long long>second_smallest(n);
  for(int i=0; i<n; i++)
  {
    long long m;
    cin>>m;
    vector<long long>tmp(m);
    for(int j=0; j<m; j++)
    {
        cin>>tmp[j];
    }
    long long mn = *min_element(tmp.begin(), tmp.end());
    global_minimum = min(global_minimum, mn);
    tmp.erase(find(tmp.begin(), tmp.end(), mn));
    second_smallest[i] = (*min_element(tmp.begin(), tmp.end()));
  }
  cout<<accumulate(second_smallest.begin(), second_smallest.end(), 0ll) + global_minimum - *min_element(second_smallest.begin(), second_smallest.end())<<endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
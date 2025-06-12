#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n; cin>>n;
  vector<int> a(n);
  vector< pair< int, int> >vec(n), res(n+1);
  vector<bool>p(n+1, true), q(n+1, true);
  unordered_map<int, int>counts;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    counts[a[i]]++;
    vec[i] = {a[i], i+1};
    if(counts[a[i]]>2 || a[i] < (i+1))
    {
        cout<<"NO"<<endl;
        return 0;
    }
  }

  sort(vec.rbegin(), vec.rend());

  for(int i=0; i<n; i++)
  {
    int value = vec[i].first; 
    int index = vec[i].second;
    if(p[value])
    {
        res[index].first = value;
        p[value] = false;
    }
    else
    {
        res[index].second = value;
        
    }
  }


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
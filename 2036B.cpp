#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,k;
  cin>>n>>k;
  unordered_map<long long, long long>mp;
  for(int i=0; i<k; i++) 
  {
    long long x,y;
    cin>>x>>y;
    mp[x]+= y;
  }

  vector<int>vec;
  for (const auto& pair : mp) 
  {
    vec.push_back(pair.second); 
  }
  long long res = 0;
  sort(vec.begin(), vec.end());

  int idx = vec.size()-1;

  while(n>0 && idx>-1)
  {
    res += vec[idx];
    idx--;
    n--;
  }

  cout<<res<<endl;
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
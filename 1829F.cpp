#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  map<int,int>mp;
  for(int i=0; i<m; i++) // count degree of each node
  {
    int a,b;
    cin>>a>>b;
    mp[a]++;
    mp[b]++;
  }

  map<int, int>k; 
  for(auto i = mp.begin(); i!=mp.end(); i++) // count number of times a degree occors
  {
    k[i->second]++;
  }

  vector<int>vec; // contains the number of occurances of each degree 
  for( auto t: k) 
  {
    vec.push_back(t.second);
  }
  
  int x,y, xy;
  sort(vec.begin(), vec.end());
  
  if(vec.size()==3)
  {
    xy = vec[2];
    x = vec[1];
    y = xy/x;
  }
  else
  {
    xy = vec[1];
    x = vec[0]-1;
    y = xy/x;
  }

  cout<<x<<" "<<y<<endl;
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
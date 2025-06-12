#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, x;
  cin>>n>>x;
  vector<int>vec;
  int o=0;
  bool flag = false;
  for(int i=0; i<n; i++)
  {
    o = o|i;
  }
  if(x==o)
  {
    for(int i=0; i<n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
  }
  
  for(int i=0; i<n-1; i++)
  {
    if( (i&x) == i)
    {
        vec.push_back(i);
    }
    else
    {
        break;   
    }
  }

  while(vec.size() < n)
  {
    vec.push_back(x);
  }
  vec.push_back(x);
  for(int i=0; i<n; i++)
  {
    cout<<vec[i]<<" ";
  }
  cout<<endl;
  return 0;  
}


int32_t main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long x,y,z,k, res = 0;
  cin>>x>>y>>z>>k;
  for(long long i=1; i<=x; i++)
  {
    for(long long j=1; j<=y; j++)
    {
        if(k%(i*j)==0 && k/(i*j) <= z)
        {
            long long w = k/(i*j);
            long long positions = (x-i + 1) * (y-j+1) * (z-w+1);
            res = max(res, positions);
        }
    }
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
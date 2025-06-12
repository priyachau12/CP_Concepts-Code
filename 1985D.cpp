#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  int xl = m+1, xh = -1, yl = n+1, yh = -1;
  for(int i=1; i<=n; i++)
  {
    string s;
    cin>>s;
    for(int j=1; j<=m; j++)
    {
        char c = s[j-1];
        if(c=='#')
        {
            //cout<<i<<" "<<j<<"------"<<endl;
            xl = min(xl, j);
            yl = min(yl, i);
            xh = max(xh, j);
            yh = max(yh, i); 
        }
    }
  }
  cout<<ceil((yh+yl+0.0)/2.0)<<" "<< ceil((xh+xl+0.0)/2.0) <<endl;
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
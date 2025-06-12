#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long a,b,c, res = 0;
  cin>>a>>b>>c;
  if(a+b+c==0)
  {
    cout<<0<<endl;
    return 0;
  }
  long long m = min(min(a,b),c);
  a -= m;
  b -= m;
  c -= m;
  res += m;
  res += min(a/2, c);
  cout<<res<<endl;
  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}
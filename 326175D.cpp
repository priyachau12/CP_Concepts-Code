#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a+b-c==d || a-b+c==d)
  {
    cout<<"YES";
  }
  else if(a*b-c==d || a-b*c==d)
  {
    cout<<"YES";
  }
  else if(a*b+c==d||a+b*c==d)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
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
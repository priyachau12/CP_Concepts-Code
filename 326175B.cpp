#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long a,b,k;
  cin>>a>>b>>k;
  if(a%k==0 && b%k==0)
  {
    cout<<"Both";   
  }
  else if(a%k==0)
  {
    cout<<"Memo";
  }
  else if(b%k==0)
  {
    cout<<"Momo";
  }
  else
  {
    cout<<"No One";
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
#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  int a = n/10, b=n%10;
  if(a==0 || b==0)
  {
    cout<<"YES";
    return 0;
  }
  if(a%b==0 || b%a==0)
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
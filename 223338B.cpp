#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n;
  cin>>n;
  if(n==1)
  {
    cout<<"NO";
    return 0;f
  }
  if(n==2)
  {
    cout<<"YES";
    return 0;
  }
  for(int i=2; i <= sqrt(n); i++)
  {
    if(n%i==0)
    {
        cout<<"NO";
        return 0;
    }
  }
  cout<<"YES";
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
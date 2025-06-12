#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n;
  cin>>n;
  int count = 0;
  for(int i=0; i<64; i++)
  {
    if(n & (1ll<<i))
    {
        count++;
    }
  }

  if(count==1)
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
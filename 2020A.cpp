#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, k, res=0;
  cin>>n>>k;
  if(k==1)
  {
    cout<<n<<endl;
    return 0;
  }
  while (n>0)
  {
    res += n%k;
    n /= k;
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
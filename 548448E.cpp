#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b;
  cin>>a>>b;
  cout<<a/__gcd(a,b)<<" "<<b/__gcd(a,b)<<endl;
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
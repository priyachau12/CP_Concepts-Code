#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  cout<<(n/4) + ((n%4)/2)<<endl;
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
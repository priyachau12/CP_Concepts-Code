#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string a,b;
  cin>>a>>b;
  char c=a[0];
  a[0] = b[0];
  b[0] = c;
  cout<<a<<" "<<b<<endl;
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
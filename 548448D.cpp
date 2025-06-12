#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b;
  cin>>a>>b;
  if(a%b==0)
  {
    cout<<a/b<<" ";
  }
  else
  {
    cout<<(a/b)+1<<" ";
  }
  cout<<a/b<<endl;
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
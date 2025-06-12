#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int k = 1000;
  for(int i=0; i<=100; i++)
  {
    k = min(k, abs(i-a)+ abs(i-b)+abs(i-c));
  }
    cout<<k<<endl;
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
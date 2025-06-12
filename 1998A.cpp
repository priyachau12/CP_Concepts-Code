#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int cx, cy, k;
  cin>>cx>>cy>>k;
  int t=1;
  for(int i=0; i<(k/2); i++)
  {
    cout<<(cx-t)<<" "<<cy<<endl;
    cout<<(cx+t)<<" "<<cy<<endl;
    t++;
  }

  if(k&1)
  {
    cout<<cx<<" "<<cy<<endl;
  }
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
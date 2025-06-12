#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int roomNumber,trapTimer;
  cin>>roomNumber>>trapTimer;
  int tmp=roomNumber+((trapTimer-1)/2);
  for(int i=1;i<n;i++)
  {
    cin>>roomNumber>>trapTimer;
    tmp=min(tmp,roomNumber+(trapTimer-1)/2);
  }
  cout<<tmp<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
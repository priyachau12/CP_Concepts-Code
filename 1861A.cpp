//prime Deletion:
#include<bits/stdc++.h>
using namespace std;
int solve()
{
  string str;
    cin>>str;
    for(int i=0;i<9;i++)
    {
      if(str[i]=='3')
      {
        cout<<"31 \n";
        return 0;
      }
      else if(str[i]=='1')
      {
        cout<<"13 \n";
        return 0;
      }
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
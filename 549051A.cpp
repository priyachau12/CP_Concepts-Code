#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a,b;
  cin>>a>>b;
  int count=0;
  for(int i=a; i<=b; i++)
  {
    int tmp = i;
    bool flag = true;
    while(tmp>0)
    {
        int k = tmp%10;
        tmp = tmp/10;
        if(k!=4 && k!=7)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        count++;
    }
  }
  cout<<count;
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
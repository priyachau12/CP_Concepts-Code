#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int a[2], b[2];
  cin>>a[0]>>a[1]>>b[0]>>b[1];
  int res = 0;
  for(int i:{0, 1})
  {
    for(int j:{0, 1})
    {
      int rounds=0;
      rounds += a[i] > b[j];
      rounds -= (a[i^1] < b[j^1]);
      rounds += (a[i^1] > b[j^1]);
      rounds -= a[i] < b[j];
      if(rounds>0)
      {
        res++;
      }
    }
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
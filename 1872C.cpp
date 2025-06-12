#include <bits/stdc++.h>
using namespace std;

int findFactor(int x)
{
  for(int i=2;i<=sqrt(x);i++)
  {
    if(x%i==0)
    {
      return i;
    }
  }
  return -1;
}

int solve()
{
  int l,r;
  cin>>l>>r;
  if(r<=3)
  {
    cout<<-1<<endl;
  }
  else if(l==r)
  {
    int x=findFactor(l);
    if(x==-1)
    {
      cout<<-1<<endl;
    }
    else
    {
      cout<<x<<" "<<(l-x)<<endl;
    }
  }
  else
  {
    if(r%2==0)
    {
      cout<<2<<" "<<r-2<<endl;
    }
    else
    {
      cout<<2<<" "<<r-3<<endl;
    }
  }
  return 0;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
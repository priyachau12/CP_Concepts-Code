#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m)
{
    //cout<<n<<" "<<m<<endl;
    if(m == 1)
    {
        return false;
    }
    if(n%m == 0)
    {
        return true;
    }
    if(m == n%m)
    {
        return false;
    }
    else
    {
        return check(n, n%m);
    }   
}

int solve()
{
  int n, m;
  cin>>n>>m;
  if(check(n,m))
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
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
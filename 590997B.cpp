#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int x)
{
    int fact = 0;
    for(int i=2; i*i <= x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int solve()
{
  int n;
  cin>>n;
  if(n%2==0 && isPrime(1 + n))
  {
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
  }
  else if(n%2==1 && isPrime(2+n))
  {
    int val = 2;
    for(int i=1; i<=n/2; i++){
        cout<<val<<" ";
        val++;
    }
    cout<<1<<" ";
    for(int i=1; i<=n/2; i++)
    {
        cout<<val<<" ";
        val++;
    }
    cout<<endl;
  } 
  else 
  {
    cout<<-1<<endl;
  }
  return 0;  
}


int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
#include <bits/stdc++.h>
using namespace std;

long long calc(long long n)
{
    long long tmp = sqrtl((n));
    return n - tmp;
}

int solve()
{
  long long k, res = 2e18;
  cin>>k;
  long long l=1, r=2e18;
  while(l<=r)
  {
    long long mid = l + (r-l)/2;
    if(calc(mid)>k)
    {
        r = mid - 1;
    }
    
    if(calc(mid)==k)
    {
        res = mid;
        r = mid -1;
    }

    if(calc(mid) < k)
    {
        l = mid+1;
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
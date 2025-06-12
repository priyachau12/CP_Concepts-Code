#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  long long mx = -1 * 1e9, a=0,b=0;
  for(int i=1; i<=n; i++)
  {
    long long k;
    cin>>k;
    mx = max(mx, k);
    a += max(0ll, (i&1) * k);
    b += max(0ll, (int)(!(i&1)) * k);
  }
  if(mx<0)
  {
    cout<<mx<<endl;
    return 0;
  }
  cout<<max(a,b)<<endl;
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
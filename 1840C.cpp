#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n, k, p;
  cin>>n>>k>>p;
  vector<long long>vec(n);
  long long res = 0;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  bool flag = false;
  long long len = 0;
  for(int i=0; i<n; i++)
  {
    if(vec[i] <= p)
    {
        len++;
    }
    else
    {
        if(len >= k)
        {
            long long t = len-k+1;
            res += (t*(t+1ll))/2ll;
        }
        len = 0;
    }
  }
  if(len >= k)
  {
    long long t = len-k+1;
    res += (t*(t+1))/2;
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
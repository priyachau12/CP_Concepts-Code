#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n,k, res=0;
  cin>>n>>k;
  for(int a=1; a<k; a++)
  {
    for(int b=1; b<k; b++)
    {
        if(a+b>=k || a*b >=n )
        {
            break;
        }
        float fa = a, fb = b, fn=n;
        long long tmp = (fn-(fa*fb))/(fa+fb);
        res += min(tmp, k-(a+b));
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
#include <bits/stdc++.h>
using namespace std;

int solve()
{
   int n;
   cin>>n;
   int res = -1;
   int greatest = -1;
   for(int i=2; i<=n; i++)
   {
        long long sum = 0, k=0;
        while(k*i <= n)
        {
            sum += k*i;
            k+=1;
        }

        if(sum > greatest)
        {
            greatest = sum;
            res = i;
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
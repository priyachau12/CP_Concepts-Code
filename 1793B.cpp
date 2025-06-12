#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long a,b;
  cin>>a>>b;
  long long n = 2*(a-b);
  cout<<n<<endl;
  for(long long i=b; i<a; i++)
  {
    cout<<i<<" ";
  }
  for(long long i=a; i>b; i--)
  {
    cout<<i<<" ";
  }
  cout<<endl;
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
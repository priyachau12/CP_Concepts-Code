#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  long long sum = 0, smallest=1000000000000;
  int neg =0;
  for(int i=0; i<n; i++)
  {
    long long x;
    cin>>x;
    if(x<0)
    {
        neg++;
    }
    smallest= min(smallest, abs(x));
    sum += abs(x);
  }

  if(neg%2==0)
  {
    cout<<sum<<endl;
  }
  else
  {
    cout<<sum-2*smallest<<endl;
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
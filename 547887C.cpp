#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,k;
  cin>>n>>k;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    if(vec[i]==k)
    {
        cout<<i<<" ";
    }
  }
  cout<<endl;
  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}
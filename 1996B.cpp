#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,k;
  cin>>n>>k;
  vector<string> vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  int in = n/k;
  in = n/in;
  for(int i=0; i<n; i+=in)
  {
    for(int j=0; j<n; j+=in)
    {
        cout<<vec[i][j];
    }
    cout<<endl;
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
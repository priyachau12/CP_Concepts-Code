#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n, m;
  cin>>n>>m;
  vector<string>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  for(int i=0; i<m; i++)
  {
    int immovable = n-1;
    for(int j=n-1; j>=0; j--)
    {
        if(vec[j][i]=='o')
        {
            immovable = j-1;
        }
        else if(vec[j][i] == '*')
        {
            swap(vec[j][i], vec[immovable][i]);
            immovable -= 1;
        }
    }
  }
  for(int i=0; i<n; i++)
  {
    cout<<vec[i]<<endl;
  }
  cout<<endl;
  return 0;  
}


int32_t main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
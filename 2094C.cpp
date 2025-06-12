#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin>>n;
  vector<vector<int>>vec(n, vector<int>(n));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
        cin>>vec[i][j];
    }
  }
  vector<int> tmp;
  int k = 0;
  for (int i=0; i<n; i++)
  {
    tmp.push_back(vec[0][i]);
    k += vec[0][i];
  }

  for(int i=1; i<n; i++)
  {
    tmp.push_back(vec[i][n-1]);
    k += vec[i][n-1];
  }
  //cout<<k<<endl;
  n = 2*n;
  int t  = ((n *(n+1))/2);
  //cout<<t<<endl;
  cout<<(t- k)<<" ";
  for(int x : tmp)
  {
    cout<<x<<" ";
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
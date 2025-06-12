#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  vector<int>res(n, 0);
  vector<vector<int>>vec(n, vector<int>(m));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cin>>vec[i][j];
    }
  }

  for(int i=0; i<n; i++)
  {
    sort(vec[i].begin(), vec[i].end());
    for(int j=1; j<m; j++)
    {
        if(vec[i][j] - vec[i][j-1] != n)
        {
            cout<<-1<<endl;
            return 0;
        }
        
    }
    res[vec[i][0]] = i;
  }

  for(int i=0; i<n; i++)
  {
    cout<<res[i]+1<<" ";
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
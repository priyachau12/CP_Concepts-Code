#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  vector<vector<long long>>vec(n, vector<long long>(m, 0));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cin>>vec[i][j];
    }
  }

  int row = 0, col=0;
  for(int i=0; i<s.size(); i++)
  {
    long long sum = 0; 
    if(s[i]=='D')
    {
        for(int j=0; j<m; j++)
        {
            sum += vec[row][j];
        }
        vec[row][col] = -1 * sum;
        row++;
    }
    else
    {
        for(int j=0; j<n; j++)
        {
            sum += vec[j][col];
        }
        vec[row][col] = -1 * sum;
        col++;
    }
  }

  long long sum = 0;
  for(int j=0; j<m; j++)
  {
    sum += vec[n-1][j];
  }
  vec[n-1][m-1] = -1 * sum;

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cout<<vec[i][j]<<" ";
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
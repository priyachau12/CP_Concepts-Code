#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<vector<int>> res(n, vector<int>(n));
  int s = 1;
  int e = n*n;
  bool flag = false;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
        if(flag)
        {
            res[i][j] = s;
            s++;
        }
        else
        {
            res[i][j] = e;
            e--;
        }

        flag = !flag;
    }

    if(i%2==0)
    {
        reverse(res[i].begin(), res[i].end());
    }

    for(int j=0; j<n; j++)
    {
        cout<<res[i][j]<<" ";
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
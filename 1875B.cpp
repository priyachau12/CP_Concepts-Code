#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, m, k;
    long long sumj = 0, sumg = 0;
    cin >> n >> m >> k;
    vector<long long > j(n);
    vector<long long > g(m);
    long long  ming =INT_MAX , maxg = -1;
    long long  minj = INT_MAX, maxj = -1;
    for (int i = 0; i < n; i++)
    {
      cin >> j[i];
      minj = min(minj, j[i]);
      maxj = max(maxj, j[i]);
      sumj += j[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin >> g[i];
      ming = min(ming, g[i]);
      maxg = max(maxg, g[i]);
      sumg += g[i];
    }
    //cout<<sumj<<endl;
    if (k % 2 == 0)
    {
      if(maxj>ming)
      {
        sumj=sumj-maxj+ming;
      }
    }
    else
    {
      if(maxg>minj)
      {
        sumj=sumj-minj+maxg;
      }
    }
    cout << sumj << endl;
  }
}
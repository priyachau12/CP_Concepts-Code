#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n; cin >> n;
  vector <int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<int> res;
  for(int i = 0; i < n; i++)
  {
    int l = 1, r = i + 1;
    while(l <= r)
    {
      int m = (l + r) / 2;
      if(a[i - m + 1] >= m)
      {
        l = m + 1;
      }
      else
      {
        r = m - 1;
      }
    }
    res.push_back(r);
  }
  for(int i=0; i<res.size(); i++)
  {
    cout << res[i] << " ";
  }
  cout<<"\n";
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
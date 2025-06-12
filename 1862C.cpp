#include <bits/stdc++.h>
using namespace std;
int solve()
{
  int n;
  cin >> n;
  int flag = 1;
  vector<int> planks(n+1);
  unordered_map<int, int> reflected;
  for (int i = 1; i <= n; i++)
  {
    cin >> planks[i];
  }
  if (planks[0] != n)
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
    int count = 0;
    int greatest = planks[0];

    for (int i = 0; i < n; i++)
    {
      
    }
  }
  for (int i = 0; i < n; i++)
  {
    if(planks[i]!=reflected[i])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
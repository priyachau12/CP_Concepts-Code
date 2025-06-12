#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> one(n + 1, 0);
  vector<int> two(n + 1, 0);

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (tmp <= n)
    {
      one[tmp]++;
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j += i)
    {
      two[j] += one[i];
    }
  }

  int ans = *max_element(two.begin(), two.end());

  cout << ans << endl;
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
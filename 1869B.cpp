#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<int> x(n + 1);
    vector<int> y(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> x[i] >> y[i];
    }
    ull ans = llabs(x[b] - x[a]) + llabs(y[b] - y[a]); // stores final answer
    ll minS = LLONG_MAX - 1;                          // minimum distance between major city and Source
    ll minD=LLONG_MAX-1;                              // minimum distance between major city and Destination
    for (int i = 1; i <= k; i++)
    {
      minS = min(minS, llabs(x[i] - x[a]) + llabs(y[i] - y[a]));
      minD = min(minD, llabs(x[i] - x[b]) + llabs(y[i] - y[b]));
    }
    ans = min(ans, (ull)(minS + minD));
    cout << ans << "\n";
  }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long


#include <iostream>
#include <vector>

using namespace std;

vector<int> primes;

void APS (int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}


int solve()
{
  int n, m, k;
  cin>>n>>m>>k;
  int mx = ceil((k+0.0)/(n+0.0));
  int gaps = m - mx;
  if(gaps==0)
  {
    cout<<m<<endl;
    return 0;
  }
  int res = ceil((mx+0.0)/(gaps+1.0));
  cout<<res<<endl;
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
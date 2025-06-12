#include <bits/stdc++.h>
using namespace std;
#define int long long


#include <iostream>
#include <vector>

using namespace std;

vector<int> primes;

void APS(int n) {
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
    int n;
    cin>>n;
    int count=0;
    for(int i = 1; i<=n; i++)
    {
        int mx = n/i;
        auto itr = upper_bound(primes.begin(), primes.end(), mx);
        count += (itr - primes.begin());
    }   
    cout<<count<<endl;
}


int32_t main()
{
  APS(1e7+5);
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) 
    {
        int n,m;
        cin>>n>>m;
        long long product = 1;
        vector<int>vec(n);
        for (int i=0;i<n;i++)
        {
            cin>>vec[i];
            product *= vec[i];
            product = product % m;
        }
        string str;
        cin>>str;
        

    }
}
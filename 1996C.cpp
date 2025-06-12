#include <bits/stdc++.h>
using namespace std;

int computeDifference(const vector<int>& freqA, const vector<int>& freqB) {
    int difference = 0;
    for (int i = 0; i < 26; ++i) {
        difference += abs(freqA[i] - freqB[i]);
    }
    return difference;
}

int solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> prefixFreqA(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefixFreqB(n + 1, vector<int>(26, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            prefixFreqA[i + 1][j] = prefixFreqA[i][j];
            prefixFreqB[i + 1][j] = prefixFreqB[i][j];
        }
        prefixFreqA[i + 1][a[i] - 'a']++;
        prefixFreqB[i + 1][b[i] - 'a']++;
    }
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        l--; 
        r--;
        vector<int> freqA(26, 0), freqB(26, 0);
        for (int j = 0; j < 26; ++j) {
            freqA[j] = prefixFreqA[r + 1][j] - prefixFreqA[l][j];
            freqB[j] = prefixFreqB[r + 1][j] - prefixFreqB[l][j];
        }
        int diff = computeDifference(freqA, freqB);
        cout << diff / 2 << endl;
    }

    return 0;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}

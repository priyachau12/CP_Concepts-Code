#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        long long odd = 0, even = 0;
        cin >> n;
        vector<int> v(n + 1);

        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                even += v[i];
            } else {
                odd += v[i];
            }
        }

        bool f = true;
        int i = 1;
        int j = n;

        while(i < j) {
            if(odd > even) {
                if(i % 2 != 0 && j % 2 != 0) {
                    if(v[j] < v[i]) {
                        odd = odd - v[j];
                        j--;
                    } else {
                        odd = odd - v[i];
                        i++;
                    }
                } else if(i % 2 != 0) {
                    odd = odd - v[i];
                    i++;
                } else if(j % 2 != 0) {
                    odd = odd - v[j];
                    j--;
                } else {
                    if(v[j] < v[i]) {
                        odd = odd - v[j];
                        j--;
                    } else {
                        odd = odd - v[i];
                        i++;
                    }
                }
            } else if(even > odd) {
                if(i % 2 == 0 && j % 2 == 0) {
                    if(v[j] < v[i]) {
                        even = even - v[j];
                        j--;
                    } else {
                        even = even - v[i];
                        i++;
                    }
                } else if(i % 2 == 0) {
                    even = even - v[i];
                    i++;
                } else if(j % 2 == 0) {
                    even = even - v[j];
                    j--;
                } else {
                    if(v[j] < v[i]) {
                        even = even - v[j];
                        j--;
                    } else {
                        even = even - v[i];
                        i++;
                    }
                }
            } else {
                cout << "YES" << endl;
                f = false;
                break;
            }
        }

        if(f) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
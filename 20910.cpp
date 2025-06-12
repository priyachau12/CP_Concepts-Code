#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n;
  cin>>n;
  vector<int>tmp = {0, 0, 0, 1, 2, 2, 3, 5};
  unordered_map<int, int>a, b;
  
  for(int i=0; i<8; i++)
  {
    a[tmp[i]]++;
  }
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  int count = 0;
    for (int i = 0; i < n; i++) {
        b[vec[i]]++;
        
        bool enough = true;
        for (auto &[digit,req_count] : a) {
            if (b[digit]<req_count) {
                enough=false;
                break;
            }
        }
        
        if (enough) {
            cout <<(i + 1)<< "\n";
            return 0;
        }
    }
    
    cout << "0\n"; 
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
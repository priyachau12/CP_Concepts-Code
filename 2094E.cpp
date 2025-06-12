#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n;
  cin>>n;
  vector<int> vec(n);
  map<int, int>mp;
  for(int i=0; i<n; i++){
    cin>>vec[i];
    for(int j=0; j<32; j++){
        if(vec[i]&(1<<j))
        mp[j] += 1;
    }
  }

  int res = 0;
  for(int i=0; i<n; i++){
    int tmp = 0;
    for(int j=0; j<32; j++){
        int bit = (1LL<<j);
        if(vec[i]&bit){
            tmp += (n-mp[j])*bit; 
        }else{
            tmp += mp[j]*bit;
        }
    }
    res = max(res, tmp);
  }
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
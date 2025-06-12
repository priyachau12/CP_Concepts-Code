#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string s;
  cin>>s;
  vector<int>mp(2,0);
  for(int i=0; i<s.size(); i++)
  {
    mp[s[i]-'0']++;
  }
  int res = 0;
  for(int i=0; i<=s.size() ;i++){
    if(mp[ ((s[i] - '0') + 1 )%2 ] <= 0){
        res = s.size() - i;
        break;
    }else{
        mp[ ((s[i] - '0') + 1 )%2 ]--;
    }
  }
  cout<<res<<endl;
  return 0;  
} 

int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
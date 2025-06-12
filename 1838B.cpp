#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  unordered_map<int, int>mp;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    mp[vec[i]]=i+1;
  }
  int mn = min(mp[1], mp[2]), mx=max(mp[1], mp[2]);
  if(mn<mp[n] && mp[n]<mx)
  {
    cout<<"1 1"<<endl;
  }
  else if ((mp[1] < mp[2] && mp[1] < mp[n])||(mp[1] > mp[2] && mp[1] > mp[n]))
  {
    cout<<mp[2]<<" "<<mp[n]<<endl;
  }
  else
  {
    cout<<mp[1]<<" "<<mp[n]<<endl;
  }
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
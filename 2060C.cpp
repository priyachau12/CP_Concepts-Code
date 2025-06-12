#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, k, res = 0;
  cin>>n>>k;
  vector<int>vec(n);
  map<int, int>mp;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    if(mp.count(k - vec[i]) && mp[k-vec[i]] > 0)
    {
        res++;
        //cout<<"---"<<i<<" "<<vec[i]<<" "<<k-vec[i]<<endl;
        mp[k-vec[i]] --;
    }
    else 
    {
        mp[vec[i]]++;
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
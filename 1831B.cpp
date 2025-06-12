#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>a(n),b(n);
  for(int i=0; i<n; i++) cin>>a[i];
  for(int i=0; i<n; i++) cin>>b[i];
  map<int, int>mpa, mpb;
  int len = 1;
  mpa[a[0]]=1;
  mpb[b[0]]=1;
  for(int i=1; i<n; i++)
  {
    if(a[i]==a[i-1]){
        len++;
    }else{
        len=1;
    }
    mpa[a[i]]= max(mpa[a[i]], len);
  }
  len = 1;
  for(int i=1; i<n; i++){
    if(b[i]==b[i-1]){
        len++;
    }else{
        len=1;
    }
    mpb[b[i]]= max(mpb[b[i]], len);
  }
  int res = 0;
  //cout<<"A"<<endl;
  for(auto at: mpa){
    //cout<<at.first<<" "<<at.second<<endl;
    res = max(res, at.second + mpb[at.first]);
}
  //cout<<"B"<<endl;
  for(auto bt: mpb){
    //cout<<bt.first<<" "<<bt.second<<endl;
    res = max(res, bt.second + mpa[bt.first]);
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
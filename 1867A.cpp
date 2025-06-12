#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
      int x; cin>>x;
      a[i]=x;
      b[i]=x;
    }
    sort(b.begin(),b.end());
    
    int t=n;
    unordered_map<int,int>u;
    unordered_map<int,int>o;

    for(int i=0;i<n;i++)
    {
      o[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
      u[b[i]]=t;
      t--;
    }

    for(int i=0;i<n;i++)
    {
      int ans=u[a[i]] + o[a[i]]-1;
      o[a[i]]--; 
      cout<<ans<<" ";
    }

  }
}
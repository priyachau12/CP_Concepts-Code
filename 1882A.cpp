#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
      cin>>vec[i];
    }

    int ans=1;
    for(int i=0;i<n;i++)
    {
      if(vec[i]==ans)
      {
        ans++;
      }
      ans++;
    }
    cout<<ans-1<<endl;
  }
}
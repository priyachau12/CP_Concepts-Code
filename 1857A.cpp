#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,odd=0,even=0; cin>>n;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      if(x%2!=0)
      {
        odd++;
      }
    }

    if(odd%2==0)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
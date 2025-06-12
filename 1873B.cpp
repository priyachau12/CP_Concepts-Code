#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    int m=11;
    int index=-1;
    for(int i=0;i<n;i++)
    {
      if(m>v[i])
      {
        m=v[i];
        index=i;
      }  
    }
    v[index]++;
    int p=1;
    for(int i=0;i<n;i++)
    {
      p = p*v[i];
    }
    cout<<p<<endl;
  }
}
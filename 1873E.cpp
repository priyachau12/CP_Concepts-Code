#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    sort(v.begin(),v.end());

    int h=v[0]+1;
    long long volume=0;
    int tmp=0;
    while(volume<x)
    {
      volume += tmp;
      for(int i=tmp;i<n;i++)
      {
        if(v[i]>h)
        {
          volume += v[i]-h;
        } 
        else
        {
          tmp=i-1;
          break;
        }
      }
      h++;
    }

    cout<<h-1<<endl;
  }
}
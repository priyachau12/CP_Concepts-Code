#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long count=0;
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
      cin>>vec[i];
    }
    int i=0;
    while(b>0)
    {
      if(b>1)
      {
        count += (b-1);
        b=1;
      }
      if(b==1 && i<n)
      {
        b=min(a,b+vec[i]);
        i++;
      }
      b--;
      count++;
    }
    cout<<count<<endl;

  }
}
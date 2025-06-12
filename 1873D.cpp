#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,count=0;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
      if(str[i]=='B')
      {
        count++;
        i+=k-1;
      }
    }
    cout<<count<<endl;
  }
}
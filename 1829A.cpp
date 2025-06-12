#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a="codeforces";
  int t;
  cin>>t;
  while(t--)
  {
    int count =0;
    string str;
    cin>>str;
    for(int i=0;i<10;i++)
    {
      if(str[i]!=a[i])
      {
        count++;
      }
    }
    cout<<count<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    double ans=abs(b-a)/(2.0*c);
    cout<<ceil(ans)<<endl;
  }
}
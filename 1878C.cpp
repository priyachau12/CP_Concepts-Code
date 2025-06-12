#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    long long int n,k,x; cin>>n>>k>>x;
    long long int sumn = (k*(k+1))/2;
    if(x<sumn || x>(((n-k)*k)+sumn))
    {
      cout<<"NO"<<endl;
    } 
    else
    {
      cout<<"YES"<<endl;
    }
  }
}
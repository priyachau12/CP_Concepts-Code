#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        long long ans = a*(k-k/2)-b*(k/2);
        cout<<ans<<endl; 
    }
}
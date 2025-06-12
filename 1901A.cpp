#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    int y=0;
    int ans=-1;
    for(int i=0 ; i<n ; i++)
    {
        ans=max( vect[i] - y,ans);
        y=vect[i];
    }
    ans  =  max(   ans , 2 * (x-vect[n-1]));
    cout<< ans << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
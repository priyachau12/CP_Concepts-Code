#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long maxr=0,ans=0,sum=0,count=0;
        cin>>n>>k;
        vector<long long>a(n);
        vector<long long>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        //cout<<"SUM : ";
        for(int i=0;i<n;i++)
        {
            count++;
            if(count>k)
            {
                break;
            }
            sum += a[i];
            //cout<<sum<<" ";
            maxr = max(maxr,b[i]);
            ans = max(sum + (maxr*(k-count)),ans);
        }
        //out<<endl;
        cout<<ans<<endl;
    }
}
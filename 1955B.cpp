#include<bits/stdc++.h>
using namespace std;

int solve()
{
    long long n,c,d;
    cin>>n>>c>>d;
    vector<long long>vec(n*n),req(n*n);
    for(int i=0;i<n*n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int a = vec[0];
    int k = 0;
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            req[k] = a + (i*c) + j*d;
            k++;
        }
    }

    sort(req.begin(),req.end());

    // for(int i=0;i<n*n;i++)
    // {
    //     cout<<"req_i: "<<req[i]<<" vec_i: "<<vec[i]<<endl;
    // }

    if(req == vec)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0; 
}

int main()
{
    long long t=0;
    cin>>t;
    while(t)
    {
        solve();
        t = t-1;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,absdiff=-1;
        cin>>n;
        
        vector<long long>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        if (n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                long long sum = 0, minimum,maximum;
                long long k = i;
                for(long long j=0;j<k;j++)
                {
                    sum += vec[j];
                }
                minimum = sum;
                maximum = sum;
                for(int j = 0; j<n ;j+=k)
                {
                    long long sum_curr = 0;
                    for(long long p = j; p<j+k;p++)
                    {
                        sum_curr += vec[p];
                    }
                    minimum = min(minimum,sum_curr);
                    maximum = max(sum_curr,maximum);
                }
                absdiff = max(absdiff, abs(maximum-minimum));
            }
        }
        cout<<absdiff<<endl;
        }
    }
}
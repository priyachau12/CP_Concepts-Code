#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int k = 0;
        while(pow(2,k)<=n)
        {
            int p =(int)pow(2,k) - 1; 
            for(int i=0;i<=p;i++)
            {
                vec[i] = vec[i] - vec[p];
            }
            k++;
        }
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(vec[i-1]>vec[i])
            {
                flag = false;
            }
            //cout<<vec[i]<<" ";
        }
        cout<<"\n";
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
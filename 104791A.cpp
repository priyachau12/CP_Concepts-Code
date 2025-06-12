#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c,curr,count=0    ;
        cin>>n>>c;
        curr = c;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n;i++)
        {
            curr = curr - vec[i];
            if(curr<=0)
            {
                curr=c;
                count++;
            }
        }
        cout<<count+1<<endl;
    }
}
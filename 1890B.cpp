#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        string str,t;
        cin>>str;
        cin>>t;
        bool flag1=true,flag2=true;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]==str[i+1])
            {
                flag1 = false;
            }
        }
        for(int i=0;i<m-1;i++)
        {
            if(t[i]==t[i+1])
            {
                flag2 = false;
            }
        }

        if(flag1 || n==1)
        {
            cout<<"YES\n";
        }
        else if(!flag1 && flag2)
        {
            bool flag3=true;
            for(int i=0;i<n-1;i++)
            {
                if(str[i]==str[i+1])
                {
                    if(t[0]==str[i] || t[m-1]==str[i])
                    {
                        flag3=false;
                        //cout<<"flag3: "<<flag3<<endl;
                        break;
                    }
                }
                //cout<<"flag3: "<<flag3<<endl;
            }
            if(flag3)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
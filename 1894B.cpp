#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, f2=0,f3=0,a=-1,b=-1; cin>>n;
        vector<int>vec(n);
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            m[vec[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            if(m[vec[i]]>=2 && a==-1)
            {
                f2++;
                a = vec[i];
            }
            else if(m[vec[i]]>=2 && b==-1)
            {
                f2++;
                b = vec[i];
            }
            m[vec[i]]=0;
        }

        if(f2<2)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int count = 2;
            int flag1=true, flag2=true;
            for(int i=0;i<n;i++)
            {
                if(vec[i]==a && flag1)
                {
                    cout<<2<<" ";
                    flag1=false;
                }
                else if(vec[i]==b && flag2)
                {
                    cout<<3<<" ";
                    flag2=false;
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
}
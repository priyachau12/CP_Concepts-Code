#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[s[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(umap[i]>=(i+1))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
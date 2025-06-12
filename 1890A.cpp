#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>vec(n);
        unordered_map<int,int>umap;
        vector<int>count;
        for(int i = 0;i < n;i++)
        {
            cin>>vec[i];
            umap[vec[i]]++;
            if(umap[vec[i]]==1)
            {
                count.push_back(vec[i]);
            }
        }
        if(count.size()>2)
        {
            cout<<"NO\n";
        }
        else
        {
            if(count.size() == 1)
            {
                cout<<"YES\n";
            }
            else if(n%2==0 && umap[count[0]]==n/2)
            {
                cout<<"YES\n";
            }
            else if(n%2 != 0 && (umap[count[0]]==(n/2)+1  || umap[count[1]]==(n/2)+1))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
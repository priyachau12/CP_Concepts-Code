#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int>map;
    vector<int>vec(n),ans;
    for(int i=0;i<n;i++0)
    {
        cin>>vec[i];
        
    }

    for(int i=n-1;i>-1;i--)
    {
        map[vec[i]]++;
        if(map[vec[i]]==1)
        {
            ans.push_back(vec[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>-1;i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;

void vecout(vector<int> &vec)
{
    for (int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
}

int solve()
{
    int n;
    cin>>n;
    bool flag = true;
    vector<int>vec(n);
    vector<int>a(n,0),b(n,0);
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        map[vec[i]]++;
        a[vec[i]]=1;
    }

    for(int i=0 ; i<n;i++)
    {
        map[vec[i]]--;
        b[vec[i]]=1;

        if(map[vec[i]]==0)
        {
            a[vec[i]]=0;
        }


        cout<<i<<endl;
        vecout(a);
        vecout(b);

        if(b>=a)
        {
            cout<<2<<endl;
            cout<<1<<x<<endl;
            cout<<x+
        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
}
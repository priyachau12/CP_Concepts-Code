#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n; cin>>n;
            vector<int>vec(2*n);
            for(int i=0;i<2*n;i++)
            {
                cin>>vec[i];
            }
            sort(vec.begin(),vec.end());
            long long distance=0;
            for(int i=0;i<n-1;i++)
            {
                distance += vec[i+1]-vec[i];
            }
            for(int i=n;i<(2*n)-1;i++)
            {
                distance += vec[i+1]-vec[i];
            }
            cout<<distance<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<vec[i]<<" "<<vec[i+n]<<endl;
            }
    }
}
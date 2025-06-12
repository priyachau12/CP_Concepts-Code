#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int vec[n];
        int tmp=n-k;
        int i=0;
        while(tmp>0)
        {
            vec[i]=tmp;
            tmp--;
            i++;
        }
        tmp=n-k+1;
        while(i<n)
        {
            vec[i]=tmp;
            tmp++;
            i++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}
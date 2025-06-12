#include<bits/stdc++.h>
using namespace std;
 
int equal(string str)
{
    char c = str[0];
    for(int i=0;i<str.size();i++)
    {
        if (str[i]!=c)
        {
            return i;
        }
    }
    return -1;
}
 
int solve()
{
    string str;
    cin>>str;
    int k = equal(str);
    if (str.size()==1 || k == -1)
    {
        cout<<"NO\n";
    }
    else
    {
        
        char tmp =str[0];
        str[0] = str[k];
        str[k] = tmp;
        cout<<"YES\n"<<str<<endl;
    }
    return 0;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
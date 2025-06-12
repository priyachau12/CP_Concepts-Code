#include<bits/stdc++.h>
using namespace std;

bool cons(char c){
    if(c=='b'||c=='c'||c=='d')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string str;
        cin>>str;
        for(int i=1;i<n-2;i++)
        {
            if((str[i]=='a'||str[i]=='e'))
            {
                if(cons(str[i-1]) && cons(str[i+1]))
                {
                    cout<<str[i-1]<<str[i]<<str[i+1]<<'.';
                    i=i+2;
                }
                else
                {
                    cout<<str[i-1]<<str[i]<<'.';
                }
            }
        }
        cout<<str[n-2]<<str[n-1]<<endl;
    }
}
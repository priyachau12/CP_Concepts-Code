#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, ans=1;
        cin >> n;
        string str;
        cin >> str;
        int numCurr = 1;
        for (int i = 1; i < n; i++)
        {
            if(str[i]!=str[i-1]) numCurr=1;
            else numCurr++;

            ans=max(ans, numCurr);   
        }
        cout << ans+1 << endl;
        t--;
    }
}
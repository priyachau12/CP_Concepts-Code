#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  string a,b;
  cin>>a>>b;
  int n=a.size(), m=b.size();
  int i=0, j=0;
  if(n>m)
  {
    cout<<"NO\n";
    return 0;
  }

  while(i<n && j<m)
  {
    char c=a[i];
    int p=0,q=0;
    while(i<n && a[i]==c){
        p++;
        i++;
    }
    while(j<m && b[j]==c){
        q++;
        j++;
    }

    if( p > q || q > 2*p)
    {
        cout<<"NO\n";
        return 0;
    }
  }
  if(i<n || j<m)
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";  
  }
  return 0;  
}


int32_t main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
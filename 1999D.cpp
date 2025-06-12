#include <bits/stdc++.h>
using namespace std;

int solve()
{
  string a, b, res="";
  cin>>a>>b;
  int i=0, j=0; 
  int la = a.length();
  int lb = b.length();
  for(i=0; i<la; i++)
  {
    if(j<lb)
    {//fuck you cf
        if(a[i]!='?')
        {
            if(a[i]==b[j])
            {
                j++;
            }
            res+=a[i];
        }
        else
        {
            res+=b[j];
            j++;
        }
    }
    else
    {
        if(a[i]!='?')
        {
            res+=a[i];
        }
        else
        {
            res+='z';
        }
    }
  }
  if(j==lb)
  {
    cout<<"YES\n";
    cout<<res<<endl;
  }
  else
  {
    cout<<"NO\n";
  }
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
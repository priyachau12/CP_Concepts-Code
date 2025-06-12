#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  int a=0, b=n-1;
  {
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j && a==b )
            {
                cout<<"X";
            }
            else if(j==a)
            {
                cout<<"\\";
            }
            else if(j==b)
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }
        }
        a++;
        b--;
        cout<<endl;
    }
  }
  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}
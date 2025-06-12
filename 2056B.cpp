#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<string>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  vector<int>res(n);
  for(int i=0; i<n; i++)
  {
    int sc=0, lc=0;  
    for(int j=0; j<n; j++)
    {
        if (vec[i][j] == '1')
        {
            sc += j < i;
            lc += i < j;
        }
    }
    int index = sc + ((n - i) - lc);
    res[index-1] = i+1;
  }

  for(int i=0; i<n; i++)
  {
    cout<<res[i]<<" ";
  }
  cout<<endl;
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
#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
  vector<string>vec(n);
  for(int i=0;i<n;i++)
  {
    cin>>vec[i];
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      vector<int>v={vec[i][j],vec[j][i],vec[]}
    }
  }
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n cin>>n;
    solve(n);
  }
}
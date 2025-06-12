#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, tmp=0;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    tmp+= vec[i];
  }
  cout<<tmp<<endl;
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
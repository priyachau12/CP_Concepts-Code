#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  for(int i=0; i<n-1; i++)
  {
    int temp = min(vec[i], vec[i+1]);
    vec[i] = vec[i] - temp;
    vec[i+1] -= temp;
  }

  for(int i=0; i<n-1; i++)
  {
    if(vec[i+1] - vec[i] < 0)
    {
        cout<<"NO\n";
        return 0;
    }
  }
  cout<<"YES\n";
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
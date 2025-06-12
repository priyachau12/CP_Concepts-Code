#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
  int n; cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }

  int l=-1, r=-1;
  int max_removed = -1;
  for(int i=0; i<n; i++)
  {
    int removed = 0;
    for(int j=i; j<n; j++)
    {
        if (vec[j]<vec[i])
        {
            removed++;
        }
        else if(vec[j]>vec[i])
        {
            removed--;
        }

        if(removed > max_removed)
        {
            l=i;
            r=j;
            max_removed=removed;
        }
    }
  }
  cout<<l+1<<" "<<r+1<<endl;
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
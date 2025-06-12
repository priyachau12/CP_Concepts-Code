#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  cin>>n;
  bool flag = false;
  vector<int>vec(n);
  int mx = -1, mi= -1;
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    mx = max(mx, vec[i]);
  }

  for(int i=0; i<n; i++)
  {
    if(vec[i]==mx)
    {
        mi =  max(mi, (i+1)%2 );
    }
  }

  int res;

  if (n%2==0)
  {
    res = mx + n/2 + n%2;
  }
  else
  {
    res = mx + n/2 + n%2;
    if(mi%2==0)
    {
        res -= 1;
    }
  }

  cout<<res<<endl;

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
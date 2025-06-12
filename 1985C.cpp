#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n;
  long long sum =0, gsf = -1, res = 0;
  cin>>n;
  vector<long long>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  gsf = vec[0];
  for(int i=0; i<n ; i++)
  {
    sum += vec[i];
    gsf = max(gsf, vec[i]);

    if(sum == 2*gsf)
    {
        res += 1;
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
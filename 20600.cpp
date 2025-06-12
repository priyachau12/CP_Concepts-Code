#include <bits/stdc++.h>
using namespace std;

int solve()
{
  vector<int>vec(5);
  int res = 0;
  cin>>vec[0]>>vec[1]>>vec[3]>>vec[4];
  for(int i=-200; i<=200; i++)
  {
    vec[2] = i;
    int cnt = 0;
    for(int i=2; i<5; i++)
    {
        if(vec[i] == vec[i-1] + vec[i-2])
        {
            cnt++;
        }
    }
    res = max(res, cnt);
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
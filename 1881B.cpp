#include<bits/stdc++.h>
using namespace std;
int solve()
{
  long long a,b,c;
    vector<long long>vec(3);
    cin>>vec[0]>>vec[1]>>vec[2];
    sort(vec.begin(),vec.end());
    a=vec[0];
    b=vec[1];
    c=vec[2];
    if(a==b && b==c)
    {
      cout<<"YES\n";
      return 0;
    }

    if(b%a != 0 || c%a != 0)
    {
      cout<<"NO\n";
      return 0;
    }
    else if(((b/a)+(c/a)-2)>3)
    {
      cout<<"NO\n";
      return 0;
    }
    else
    {
      cout<<"YES\n";
      return 0;
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
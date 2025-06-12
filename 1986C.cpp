#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n,m;
  cin>>n>>m;
  string s,c;
  cin>>s;
  vector<int>vec;
  set<int>st;
  for(int i=0; i<m; i++)
  {
    int x;
    cin>>x;
    if (!st.count(x))
    {
        vec.push_back(x);
        st.insert(x);
    }
  }
  sort(vec.begin(), vec.end());
  cin>>c;
  sort(c.begin(), c.end());     
  for(int i=0; i<vec.size(); i++)
  {
    s[vec[i]-1] = c[i];
  }  
  cout<<s<<endl;
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
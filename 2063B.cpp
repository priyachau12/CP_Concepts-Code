#include <bits/stdc++.h>
using namespace std;
#define int long long

int func(vector<int>& a, vector<int> b) 
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int i=0, j=0;
    int n =a.size(), m =b.size();
    while (i<n&&j<m) 
    {
        if (a[i]<b[j]) 
        {
            b[j]=a[i];
            i++;
        }
        j++;
    }
    return accumulate(b.begin(),b.end(),0ll);
}

int solve()
{
  int n, l, r;
  cin>>n>>l>>r;
  l -= 1;
  r -= 1;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
  }
  vector<int>lef, seg,rig;
  int sum = 0;
  for(int i=0; i<n; i++)
  {
    if(i<l)
    {
        lef.push_back(vec[i]);
    }
    else if(i>r)
    {
        rig.push_back(vec[i]);
    }
    else
    {
        seg.push_back(vec[i]);
        sum += vec[i];
    }
  }

  sum = min(sum, min(func(rig, seg), func(lef, seg)));
  cout<<sum<<endl;
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
  return 0;
}
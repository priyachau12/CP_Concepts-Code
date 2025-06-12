#include<bits/stdc++.h>
using namespace std;
int solve()
{
  int n;
  cin>>n;
  vector<int>nums;
  int count;
  vector<int>soln;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    nums.push_back(x);
  }
  soln.push_back(nums[0]);
  count = 1;
  for(int i=1;i<n;i++)
  {
    if(nums[i-1]<=nums[i])
    {
      soln.push_back(nums[i]);
      count++;
    }
    else
    {
      soln.push_back((nums[i]));
      soln.push_back(nums[i]);
      count+=2;
    }
  }
  cout<<count<<endl;
  for(int i=0;i<count;i++)
  {
    cout<<soln[i]<<" ";
  }
  cout<<endl;
  return 0;
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
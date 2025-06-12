#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n; 
  long long sum = 0;
  cin>>n;
  vector<int>vec(n);
  for(int i=0; i<n; i++)
  {
    cin>>vec[i];
    sum += vec[i];
  }

  double avg = (sum + 0.0)/(n + 0.0);

  if(n<3)
  {
    cout<<-1<<endl;
    return 0;
  }

  sort(vec.begin(), vec.end());
  int mid = n/2;
  long long tmp = vec[mid];

  if(tmp < (avg/2.0))
  {
    cout<<0<<endl;
    return 0;
  }

  long long res = (tmp*2*n) - sum + 1;
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


/*
1 2 3 4 

avg = 2.5



*/
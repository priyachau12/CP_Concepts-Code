#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int solve()
{
  int b,c,d;
  cin>>b>>c>>d;

  vector<long long>v = {0, 1, 0, -1, -1 , 0, 1, 0};
  int a = 0;
  for(int i=0; i<62; i++)
  {
    int index = 0;
    int k = 1ll<<i;
    if( (b&k) > 0) 
    {
        index = index|(1<<2);
    }
    if((c&k) > 0) 
    {
        index = index|(1<<1);
    }
    if((d&k) > 0) 
    {   
        index = index|1;
    }

    if(v[index]==-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    int tmp = v[index];
    
    a = (a|(tmp<<i));
  }

  cout<< a <<endl;
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
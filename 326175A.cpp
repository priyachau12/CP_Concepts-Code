#include <bits/stdc++.h>
using namespace std;

int solve()
{
  float p,d;  
  cin>>d>>p;
  double res = (p*100.0)/(100.0-d);
  printf("%.2f", res);
  return 0;  
}


int main()
{
  int tc=1;
  //cin>>tc;
  while(tc--)
  {
    solve();
  }

}
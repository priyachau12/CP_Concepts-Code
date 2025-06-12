#include <bits/stdc++.h>
using namespace std;

#define size (2*1e5+1)

vector<long long>vec(size);//fuck you cf

int logthree(int x)
{
    int count=0;
    while(x>0)
    {
        count++;
        x/=3;
    }
    return count;
}

int solve()
{
  int l, r;
  cin>>l>>r;
  long long res = vec[r] - vec[l] + 2*logthree(l);
  cout<<res<<endl;
  return 0;  
}


int main()
{
  long long tmp=0;
  for(long long i=1; i<size; i++)
  {
    tmp+=logthree(i);
    vec[i]=tmp;
  }
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
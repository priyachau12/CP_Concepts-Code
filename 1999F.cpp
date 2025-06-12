#include <bits/stdc++.h>
using namespace std;
#define size (2 * 1e5 + 5)
const long long MOD = (1e9 + 7);

vector<long long>factorials(size);

void factorial(){

    for(int i=1; i<size; i++)
    {
        factorials[i] = (factorials[i-1]*i)%MOD ;
    }
}

long long binExp(long long a, long long b)
{
    long long r = 1;
    while(b>0)
    {
        if(b & 1)
            r = (r * a) % MOD;
        b /= 2;
        a = (a * a) % MOD;
    }
    return r;
}

long long binCoeff(long long n, long long k)
{
    if (n < k)
    {
        return 0LL;
    }
    long long res = (factorials[n] * binExp((factorials[k] * factorials[n-k]) % MOD, MOD-2))%MOD;
    return res; 
}

int solve()
{
  long long n,k,x,count=0;
  cin>>n>>k;
  for(long long i=0; i<n; i++)
  {
    cin>>x;
    if(x==1)
    {
        count++;
    }
  }
  long long t = k; 
  k = k/2 + 1;
  long long res = 0;
  for (long long i = k; i<=min(count,t); i++)
  {
    res +=(binCoeff(count, i) * binCoeff(n-count, t-i))%MOD;
    //cout<<n<<"C"<<i<<"="<<binCoeff(n, i)<<endl;
  }
  cout<<res%MOD<<endl;
  return 0;  
}


int main()
{
  factorials[0] = 1;
  factorial();
  //cout<<"___"<<factorials[]<<endl;
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}
#include <bits/stdc++.h>
using namespace std;

int solve()
{
  long long n;
  cin>>n;
  vector<long long>vec(n-1);
  for(int i=0; i<n-1; i++)
  {
    cin>>vec[i];
  }
  long long sum = (n*(n+1))/2; 
  if(vec[n-2]>sum)
  {
    cout<<"NO\n";
    return 0;
  }
  if(vec[n-2]==sum)
  {
    set<long long>diffs;
    long long curr = 0;
    long long odd = -1, oc=0; 
    for(int i=0; i<n-1; i++)
    {
        long long tmp = vec[i] - curr;
        curr = vec[i];

        if((diffs.count(tmp)==1 || tmp > n))
        {
            odd = tmp;
            oc++;
        }
        else 
        {
            diffs.insert(tmp);
        }
    }
    if (oc>1)
    {
        cout<<"NO\n";
        return 0;
    }
    long long tmp = 0;
    for(int i=1; i<=n; i++)
    {
        if(diffs.count(i)<1)
        {
            tmp+=i;
        }
    }
    if(tmp==odd)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
  }
  else
  {
    vec.push_back(sum);
    set<long long>diffs;
    long long curr = 0;
    long long odd = -1, oc=0; 
    for(int i=0; i<n; i++)
    {
        long long tmp = vec[i] - curr;
        curr = vec[i];
        diffs.insert(tmp);
    }
    for(int i=1; i<=n; i++)
    {
        if(diffs.count(i)!=1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
  }
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
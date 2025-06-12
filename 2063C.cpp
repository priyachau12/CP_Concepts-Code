#include <bits/stdc++.h>
using namespace std;

void pg(vector<set<int>>&vs)
{
    cout<<"g\n";
    int n=vs.size()-1;
  for(int i=1; i<n; i++)
  {
    cout<<i<<" : ";
    for (int x:vs[i])
    {
        cout<<x<<" ";
    }
    cout<<endl;
  }
}


int cdg(const vector<set<int>>& g) {
    int n = g.size();
    vector<bool> vt(n, false);
    int disjointgs = 0;

    for (int i = 0; i < n; i++) {
        if (!vt[i]) {
            disjointgs++;
            if (!g[i].empty()) {
                queue<int> q;
                q.push(i);
                vt[i] = true;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (int nb:g[node]) {
                        if (!vt[nb]) {
                            vt[nb] = true;
                            q.push(nb);
                        }
                    }
                }
            }
        }
    }

    return disjointgs;
}

int solve()
{
  int n, res = -1;
  cin>>n;
  vector<set<int>>vs(n+1);
  map<int, int>mp;
  for(int i=1; i<n; i++)
  {
    int a,b;
    cin>>a>>b;
    vs[a].insert(b);
    vs[b].insert(a);
    mp[a]+=1;
    mp[b]+=1;
  }

  for (int i=1; i<= n; i++)
  {
    for ()
    res = max(res, mp[i]) 
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
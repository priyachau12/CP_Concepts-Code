#include <bits/stdc++.h>
using namespace std;


bool is1100(const std::string& s, int start) {
    return start >= 0 && start + 3 < s.size() && s.substr(start, 4) == "1100";
}

int count1100Change(std::string& bs, int index, char value) {
    index -= 1;
    if (bs[index] == value) {
        return 0; 
    }
    int bc = 0, ac = 0;
    if (is1100(bs, index - 3)) bc++;
    if (is1100(bs, index - 2)) bc++;
    if (is1100(bs, index - 1)) bc++;
    if (is1100(bs, index)) bc++;
    char originalChar = bs[index];
    bs[index] = value;
    if (is1100(bs, index - 3)) ac++;
    if (is1100(bs, index - 2)) ac++;
    if (is1100(bs, index - 1)) ac++;
    if (is1100(bs, index)) ac++;
    return ac - bc;
}


int solve()
{
  string s;
  cin>>s;
  int q;
  cin>>q;
  if (s.size() < 4)
  {
    int x,y;
    for(int i=0; i<q; i++)
    {
        cin>>x>>y;
        cout<<"NO\n";
    }
    return 0;
  }

  bool present = false;
  int count = 0;
  for(int i=0; i<s.size()-3; i++)
  {
    string x = s.substr(i, 4);
    if(x=="1100")
    {
        count++;
        present = true;
    }
  }

  for(int i=0; i<q; i++)
  {
    int x;
    char c;
    cin>>x>>c;
    count += count1100Change(s, x, c);
    if(count<=0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
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
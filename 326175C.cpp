#include <bits/stdc++.h>
using namespace std;

int solve()
{
  char c;
  cin>>c;
  char res = (char)( (((int) c) + 1));
  if(c == 'z')
  {
    cout<<'a'<<endl;
  }
  else
  {
    cout<<((char) (c + 1))<<endl;
  } 
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
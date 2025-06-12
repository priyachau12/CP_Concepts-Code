#include <bits/stdc++.h>
using namespace std;
int solve()
{
  long long n;
  cin >> n;
  if (n==2)
  {
    cout << "NO\n";
    return 0;
  }
  if (n>3 && n % 3 != 0 && (n - 3) != 1 && (n - 3) != 2)
  {
    cout<<"YES"<<endl;
    cout<<1<< " "<< 2<< " "<< (n - 3)<<endl;
  }
  else if (n > 6 && n % 3 == 0 && (n - 5) != 1 && (n - 5) != 4)
  {
    cout<<"YES"<<endl;
    cout<<1 << " " << 4 <<" "<< (n - 5)<<endl;
  }
  else
  {
    cout<<("NO\n");
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
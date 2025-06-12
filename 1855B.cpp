#include <bits/stdc++.h>
using namespace std;
#define int long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
      cout << 1 << endl;
    }
    else
    {
      int count = 0;
      for (int i = 1; i < n; i++)
      {
        if (n % i == 0)
        {
          count++;
        }
        else
        {
          break;
        }
      }

      cout << count << endl;
    }
  }
  return 0;
}
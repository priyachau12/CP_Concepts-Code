#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
	long double n;
	cin>>n;
	long double x = sqrtl(n);
	int y = (int) x;
	if(x==0)
	{
		cout<<0<<" "<<0<<endl;
	}
	else if(abs(x-y)<=1e-6)
	{
		cout<<y-1<<" "<<1<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}

int32_t main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		solve();
	}
}

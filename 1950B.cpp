#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<char>> grid (2*n, vector<char>(2*n));
    for(int i=0;i<(2*n)-1;i+=2){
        bool flag = (i&1)? false:true;
        for(int j=0;j<(2*n)-1;j+=2){
            if(flag)
            {
                grid[i][j] = '#';
                grid[i][j+1] = '#';
                grid[i+1][j] = '#';
                grid[i+1][j+1] = '#';
            }
            else
            {
                grid[i][j] = '.';
                grid[i][j+1] = '.';
                grid[i+1][j] = '.';
                grid[i+1][j+1] = '.';
            }
            flag = !flag;
        }
    }
    for(int i=0;i<(2*n);i++){
        for(int j=0;j<(2*n);j++){
            cout<<grid[i][j];
        }
        cout<<"\n";
    }
}

int main() {
    int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int checkValue(const std::vector<std::vector<int>>& matrix, int i, int j) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int current = matrix[i][j];
    
    // Store the neighboring values
    std::vector<int> neighbors;
    if (i > 0) neighbors.push_back(matrix[i-1][j]);       // Top
    if (i < rows - 1) neighbors.push_back(matrix[i+1][j]); // Bottom
    if (j > 0) neighbors.push_back(matrix[i][j-1]);       // Left
    if (j < cols - 1) neighbors.push_back(matrix[i][j+1]); // Right
    
    // Check if current value is strictly greater than all neighbors
    bool isGreater = true;
    for (int neighbor : neighbors) {
        if (current <= neighbor) {
            isGreater = false;
            break;
        }
    }
    
    // If not strictly greater, return the value at (i, j)
    if (!isGreater) {
        return current;
    }
    
    // Find the closest neighboring value to the current value
    sort(neighbors.begin(), neighbors.end());
    return neighbors[neighbors.size()-1];
}

int solve()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>>vec(n, vector<int>(m));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cin>>vec[i][j];
    }
  }

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        vec[i][j] = checkValue(vec, i,j);
    }
  }

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
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
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    	int m = obstacleGrid.size();
    	int n = obstacleGrid[0].size();
  		std::vector<int> row(n,0);      
  		std::vector<vector<int>> grid(m,row);
  		for (int i = 0; i < m; ++i)
  		{
  			for (int j = 0; j < n; ++j)
  			{
  				if(obstacleGrid[i][j] == 1) grid[i][j] = 0;

  				if(i == 0 && j == 0) grid[i][j] = 1;
  				else if(i == 0 || j == 0)
  				{
  					grid[i][j] = i == 0 ? grid[0][j-1] : grid[i-1][0];
  				}
  				else 
  				{
  					grid[i][j] = grid[i-1][j] + grid[i][j-1];
  				}
  			}
  		}
  		return grid[m-1][n-1];
    }
};
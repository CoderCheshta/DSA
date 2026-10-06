class Solution {
public:
    int row;
    int col;

    void dfs(vector<vector<int>>& grid,int i,int j,int &perimeter){

        if(i<0 || i>=row || j<0 || j>=col || grid[i][j]==0){
            perimeter++;
            return;
        }
        if(grid[i][j]==-1) return;

        grid[i][j]=-1;

        dfs(grid,i,j-1,perimeter);
        dfs(grid,i,j+1,perimeter);
        dfs(grid,i-1,j,perimeter);
        dfs(grid,i+1,j,perimeter);
    }

    int islandPerimeter(vector<vector<int>>& grid) {

        row=grid.size();
        col=grid[0].size();
        int perimeter=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,perimeter);
                    return perimeter;
                    
                }
            }
        }
        return -1;
    }
};
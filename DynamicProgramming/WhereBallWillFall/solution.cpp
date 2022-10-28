class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> gridTemp( m , vector<int> (n, 0));
        vector<int> ans;
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>=0;j--) {
                if(j==0 && grid[i][j]==-1) {
                    gridTemp[i][j]=-1;
                } else if(j==n-1 && grid[i][j]==1) {
                    gridTemp[i][j]=-1;
                } else if(j!=n-1 && grid[i][j]==1 && grid[i][j+1]==-1) {
                    gridTemp[i][j]=-1;
                    gridTemp[i][j+1]=-1;
                } else if(j!=0 && grid[i][j]==-1 && grid[i][j-1]==1){
                    gridTemp[i][j]=-1;
                    gridTemp[i][j-1]=-1;
                }else {
                    if(grid[i][j]==1 && i!=m-1 && j!=n-1) {
                        gridTemp[i][j]=gridTemp[i+1][j+1];
                    }
                    if(grid[i][j]==-1 && i!=m-1 && j!=0) {
                        gridTemp[i][j]=gridTemp[i+1][j-1];
                    }
                }
                //cout<<i<<" "<<j<<" "<<gridTemp[i][j]<<"\n";
            }

        }
        for(int j=0;j<n;j++) {
            if(gridTemp[0][j]==0) {
                int k=j;
                int i=0;
                while(i<m) {
                    if(grid[i][k]==1) {
                        i++;
                        k++;
                    } else {
                        i++;
                        k--;
                    }
                }
                ans.push_back(k);
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
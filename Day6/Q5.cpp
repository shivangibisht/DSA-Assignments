class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {int n=0;int sk=0;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            for(int k=0;k<grid[i][j];k++)
            {
                if(k==0){sk++;}
                if(k==(grid[i][j]-1)){sk++;}
                if(i==0){sk++;}
                else{if(k>(grid[i-1][j]-1))sk++;}
                if(i==grid.size()-1){sk++;}
                else{if(k>(grid[i+1][j]-1))sk++;}
                 if(j==0){sk++;}
                else{if(k>(grid[i][j-1]-1))sk++;}
                if(j==grid[0].size()-1){sk++;}
                else{if(k>(grid[i][j+1]-1))sk++;}
                
                
            
            
            }
        }
    }return sk;
                                               
        
    }
};
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //WITH TUTORIALS
    class Solution {
public:bool inside(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()){
            return false;
        }
        return true;
    }

    int surfaceArea(vector<vector<int>>& grid) {vector<int>x={-1, 0, 1, 0};
                                                vector<int>y={0, 1, 0, -1};
                                                int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                                            
                if(grid[i][j] > 0){
                    res += 2;
                }
                     for(int k=0;k<x.size();k++)
                     {int row=i+x[k],col=j+y[k]; int t=0;
                      if(inside(grid,row,col)){
                        t = grid[row][col];
                    }
                    
                    res += max(0, grid[i][j] - t);
                }
                
            }
        }
        return res;
    }
};   

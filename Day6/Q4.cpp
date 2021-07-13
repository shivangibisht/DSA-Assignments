class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {int xy=0,zx=0,zy=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++){
               
               if(grid[i][j]!=0) xy+=1;
            }
        }
        
         for(int i=0;i<grid.size();i++)
        {int max1=-1;
            for(int j=grid[0].size()-1;j>=0;j--){    if(grid[i][j]>max1)
                {
                    max1=grid[i][j];
                    
                }
            }
            zx+=max1;}
                                                   
  
                                                   
        for(int i=0;i<grid[0].size();i++)
        { int max1=-1;
            for(int j=grid.size()-1;j>=0;j--)
            {
               
                if(grid[j][i]>max1)
                {
                    max1=grid[j][i];
                    cout<<grid[j][i]<<" ";
                }
            }
            zy+=max1;
        }
                                                   cout<<xy<<" "<<zy<<" "<<zx;
                                                   
                                                   
                                                   
                                                   
        return (xy+zx+zy);
        
    }
}; 

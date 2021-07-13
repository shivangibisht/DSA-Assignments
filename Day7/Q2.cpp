class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
         vector<int>a;
        int pos;
       
      for(int j=0;j<n;j++)
       {
          int max=-1;
      for(int i=0;i<m;i++)
       {
          if(max<matrix[i][j])
          {max=matrix[i][j];
          pos=i;
          }
       }  
        
          if(max==*min_element(matrix[pos].begin(),matrix[pos].end()))
            a.push_back(max);   
                                                                    
         }
     
        return a;
                                                            
        
    }
};

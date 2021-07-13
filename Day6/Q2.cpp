class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){int n=image[i].size();cout<<"\n";
        for(int j=0;j<(n/2);j++){cout<<j;
           int  temp = image[i][j];
    image[i][j] = image[i][(n-j-1)];
    image[i][(n-j-1)] = temp;
              
   
            
           
            }
        }
        
        for(int i=0;i<image.size();i++){int n=image[i].size();
        for(int j=0;j<n;j++){image[i][j]=1-image[i][j];
        }}
        return image;
    }
        
    
};

class Solution {
public:
    void fill(vector<vector<int>>& img, int sr, int sc, int c,int o) {
        if(sr<0||sc<0||sr>=img.size()||sc>=img[0].size())  return;
        if(img[sr][sc]!=o)return;
         if(c==img[sr][sc]) return;
            img[sr][sc]=c; 
         fill(img,sr+1,sc,c,o);
         fill(img,sr-1,sc,c,o);
          fill(img,sr,sc+1,c,o);
          fill(img,sr,sc-1,c,o);}
   
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {int o=image[sr][sc];
        
        fill(image,sr,sc,newColor,o);
    
        return image;
        
    }
};

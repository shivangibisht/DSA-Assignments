class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {vector<int>a(mat.size(),0);
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)break;
                else a[i]++;
            }
        }vector<int>r;
                                                       
                         for(int i=0;i<k;i++){
                             int min=101;int pos;
                             for(int j=0;j<a.size();j++)
                             {
                                 if(a[j]<min)
                                 {
                                     min=a[j];pos=j;
                                                
                                 }
                                
                                 
                             } r.push_back(pos);
                                 a[pos]=101;
                             
                         }                                      
    return r;}
};

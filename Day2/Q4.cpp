class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {int  m=0,s=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){s+=accounts[i][j];
                
            }if(m<s)m=s;s=0;
        }
        
   return m; }
};

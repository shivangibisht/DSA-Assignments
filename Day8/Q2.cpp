class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];int c=1;
        string s1;
                                                      
                                                      
        for(int j=0;j<strs[0].size();j++){
      
        for(int i=1;i<strs.size();i++){
            if(s[j]!=strs[i][j]){c=0;break;}
           
            cout<<s1;
        }
        if(c==0)break; else  s1+=s[j];
    }return s1;
        
    }
};

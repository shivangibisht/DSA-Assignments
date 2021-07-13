class Solution {
public:
    vector<string> findWords(vector<string>& words) {string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
             vector<string>s; int a[26];
                                                     for(int i=0;i<r1.size();i++)
                                                         a[r1[i]-97]=1;
                                                     for(int i=0;i<r2.size();i++)
                                                         a[r2[i]-97]=2;
                                                     for(int i=0;i<r3.size();i++)
                                                         a[r3[i]-97]=3;
            for(int i=0;i<words.size();i++)
              {int c=a[tolower(words[i][0])-97];
               int flag=0;
               for(int j=1;j<words[i].size();j++)
               {
                   if(c!=a[tolower(words[i][j])-97])
                   {
                       flag=1;break;
                   }
                   
                       
               }if(flag!=1)s.push_back(words[i]);
                  
              }return s;
        
    }
};

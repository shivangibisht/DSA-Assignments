class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {string h[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
                                                           set<string>ss; 
                                                           for(int i=0;i<words.size();i++)
       {
           string s;
           for(int j=0;j<words[i].size();j++)
           {
               s+=h[words[i][j]-'a'];
           }ss.insert(s);}
                                                           
     
        return ss.size();
        
    }

class Solution {
public:
    bool isPalindrome(string s) {string s1;
        for(int i=0;i<s.length();i++){
            if((s[i]>=65 && s[i]<=90))
                s1.push_back(s[i]+32);
            else if(s[i]>=97 && s[i]<=122)
                s1.push_back(s[i]);
            else if(s[i]>=48 && s[i]<=57)
                s1.push_back(s[i]);
        }
        int i=0,j=s1.size()-1;
        while(i<=j){
            if(s1[i]!=s1[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }};

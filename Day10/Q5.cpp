class Solution {
public:
    bool isvowel(char ch){cout<<"h";if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')return true;return  false;}
    string reverseVowels(string s) {int i=0,j=s.size()-1;
        while(i<j){
        while(!isvowel(s[i])&&i<j)i++;
            while(!isvowel(s[j])&&j>i)j--;
          
            char c=s[i];
            s[i]=s[j];
            s[j]=c;i++;j--;
    }return s;
        
    }
};

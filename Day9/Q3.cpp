class Solution {
public:
    int lengthOfLastWord(string s) {int c=0,p;if(s==""||s==" ")return 0;
                                    for(int i=s.size()-1;i>=0;i--)
                                    {
                                        if(s[i]!=' '){p=i;break;}
                                    }cout<<p;for(int i=p;i>=0;i--)
                                    {
                                        if(s[i]==' ')
                                            return p-i;
                                    }return p+1;
        
        
    }
};

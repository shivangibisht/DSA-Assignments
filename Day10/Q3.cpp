class Solution {
public:
    int longestPalindrome(string s) {
        int a[52]={0};int n=0,t=0;
                                        for(int i=0;i<s.size();i++)
                                        {if((s[i]>='a')&&(s[i]<='z'))
                                            a[s[i]-'a']++;
                                         else a[s[i]-'A'+26]++;t++;}
                                     for(int i=0;i<52;i++)
                                        {n+=(a[i]-a[i]%2);}
        if(n<t)n++;
        return n;
    }
};

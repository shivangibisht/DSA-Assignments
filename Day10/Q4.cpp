class Solution {
public:
    bool canConstruct(string s, string t) {int a[26][2]={0};
                                        for(int i=0;i<s.size();i++)
                                            a[s[i]-'a'][0]++;
                                        for(int i=0;i<t.size();i++)
                                            a[t[i]-'a'][1]++;
                                        for(int i=0;i<26;i++)
                                        { if(a[i][0]>a[i][1])return false;}
                                        return true;
        
    }
};

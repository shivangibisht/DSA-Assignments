#include<bits/stdc++.h>
using namespace  std;
    string longestCommonSuffix(vector<string>& strs) {
      for(int i=0;i<strs.size();i++)
        {reverse(strs[i].begin(),strs[i].end());
        }
        string s=strs[0];int c=1;
        string s1;
        for(int j=0;j<strs[0].size();j++){
        for(int i=1;i<strs.size();i++){
        if(s[j]!=strs[i][j]){c=0;break;}
        }
        if(c==0)break; else  s1+=s[j];
        } reverse(s1.begin(),s1.end());
       return s1;}

   int main()
    {int n;
    cin>>n;

    vector<string>str(n);
    for(int i=0;i<n;i++)
    cin>>str[i];
    string res=longestCommonSuffix(str);
    cout<<res;
    }

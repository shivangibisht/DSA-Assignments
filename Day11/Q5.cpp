class Solution {
public:
    vector<int> shortestToChar(string s, char c) {vector<int>a;int j,k;
        for(int i=0;i<s.size();i++){
            for( j=i-1;j>=0;j--){if(j==-1)j=s.size();if(s[j]==c)break;}if(j==-1)j=-s.size();
            for( k=i+1;k<s.size();k++){if(s[k]==c)break;}if(k==s.size())k=2*s.size();
           
            if(s[i]==c)a.push_back(0);
                else if(i-j>k-i)a.push_back(k-i);
            else a.push_back(i-j);
            cout<<i-j<<" "<<k-i<<" \n";
        
    }return a;
        
    }
};

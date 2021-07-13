class Solution {
public:
    string mostCommonWord(string s, vector<string>& b) { 
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<b.size();i++)
        {
            transform(b[i].begin(), b[i].end(), b[i].begin(), ::tolower);
        }
        map<string,int>m;
        string s2;
        int f=0;
        for(int i=0;i<s.size();i++)
        {  
           
          if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
          {
              s2=s2+s[i];
              f=1;
          }
            else if(f==1)
            { 
                m[s2]++;
                s2.erase();
                f=0;
            }
         
             
         }
        if((s[s.size()-1]>=65&&s[s.size()-1]<=90)||(s[s.size()-1]>=97&&s[s.size()-1]<=122))
        {
            m[s2]++;
        }
        
      string s3;
        int max=INT_MIN;
        for(auto i:m)
        {if(i.second>max)
        {int f=0;
            for(int j=0;j<b.size();j++)
            {
                if(b[j]==i.first){f=1;break;}
            }
          if(f==0){s3=i.first;max=i.second;}}}
           
            
        return s3;
        
        
    }
};

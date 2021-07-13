

class Solution {
public:
    string addStrings(string a, string b) { 
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans ;
        int  i = 0, c = 0, n1 = 0, n2 = 0;
       while(i<a.size()||i<b.size()||c!=0)
       {
           if(i<a.size())n1=a[i]-48;
            if(i<b.size())n2=b[i]-48;
          int s=n1+n2+c;
           ans += ('0'+s%10);
             c = s/10;
             i++; n1 = 0; n2 = 0;
       }
        reverse(ans.begin(),ans.end());return ans;
        
        
    }
}; 
     

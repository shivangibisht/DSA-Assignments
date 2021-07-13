class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0)return "0";
        int c=3;
        string s;
        while(n!=0)
        {
            int d=n%10;
            string num=to_string(d);
            c--;
         if(c==0)
         {
             s="."+num+s;
             c=3;
         }else 
         {
             s=num+s;
         }
            n/=10;
        }
       if(s[0]=='.')
    s.erase(0,1);
return s;
        
    }
};

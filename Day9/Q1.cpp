class Solution {
public:int ci(char c)
{
    if(c=='1')return 1;
            if(c=='0')return 0;
    return 0;
        
}char ic(int c)
{
    if(c==1)return '1';
            if(c==0)return '0';
    return '0';
        
}
    string addBinary(string a, string b) {int i;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int n=min(a.size(),b.size());
        int c=0;string ans;
        for( i=0;i<n;i++)
        {  int t1;
            int t=ci(a[i])+ci(b[i])+c;
         if(t==0)
         {t1=0;c=0;}
         else if(t==1)
         {t1=1;c=0;}
         else if(t==2)
         {t1=0;c=1;}
         else {t1=1;c=1;}
         ans.push_back(ic(t1));
    } int j=i;
        if(a.size()>b.size())
          {for( i=j;i<a.size();i++)
        {  int t1;
            int t=ci(a[i])+c;
         if(t==0)
         {t1=0;c=0;}
         else if(t==1)
         {t1=1;c=0;}
         else if(t==2)
         {t1=0;c=1;}
         else {t1=1;c=1;}
         ans.push_back(ic(t1));
    }}else{for( i=j;i<b.size();i++)
        {  int t1;
            int t=ci(b[i])+c;
         if(t==0)
         {t1=0;c=0;}
         else if(t==1)
         {t1=1;c=0;}
         else if(t==2)
         {t1=0;c=1;}
         else {t1=1;c=1;}
         ans.push_back(ic(t1));
    }}cout<<ans<<" "<<c;
                                        
    if(ic(c)!='0')ans.push_back(ic(c));                                          reverse(ans.begin(),ans.end());return ans;
        
        
    }
};

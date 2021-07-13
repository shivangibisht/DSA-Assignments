class Solution {
public:
    int roman(char ch)
    {
        switch(ch)
        {
            case 'I': return 1 ;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                
        }return 0;
    }
    int romanToInt(string s) {int n=0;
        for(int i=0;i<s.size();i++)
        {
           
            
            if(roman(s[i])<roman(s[i+1]))
            { n=n+roman(s[i+1])-roman(s[i]);i++;}
            else
                  n=n+roman(s[i]);
                
        }return n;
        
    }
};

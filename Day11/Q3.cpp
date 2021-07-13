class Solution {
public:string mon(string s){if(s=="Jan")return "01";
                           if(s=="Feb")return "02";
                           if(s=="Mar")return "03";
                           if(s=="Apr")return "04";
                           if(s=="May")return "05";
                           if(s=="Jun")return "06";
                           if(s=="Jul")return "07";
                           if(s=="Aug")return "08";
                           if(s=="Sep")return "09";
                           if(s=="Oct")return "10";
                           if(s=="Nov")return "11";
                           if(s=="Dec")return "12";return " ";}
    string reformatDate(string date) {
        string day;
        string s;
        int i;
        
        for(i=0;i<date.size();i++)
        {
            if(isalpha(date[i]))
                break;
            else{s+=date[i];
                }
        }if(s.size()==1)s="0"+s;
        day=date.substr(i+7)+"-"+mon(date.substr(i+3,3))+"-"+s;
        
        
        return day;
        
    }
};

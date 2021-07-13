#include<bits/stdc++.h>
using namespace  std;
string substring(string s1,string s2)
{
    string s3;
    for(int i=0;i<=s1.size();i++)
{

    for(int j=i;j<=s1.size();j++)
    {string temp=s1.substr(i,j);
      size_t found=s2.find(temp);
        if (found != string::npos)
        {

         if(s3.size()<temp.size())
            s3=temp;
        }

    }
}
return s3;
}

string check(vector<string>&str)
{  string s=substring(str[0],str[1]);

    for(int i=2;i<str.size();i++)
    {
        s=substring(s,str[i]);
    }return s;

}

int main()
{
    int n;
    cin>>n;

    vector<string>str(n);
    for(int i=0;i<n;i++)
    cin>>str[i];
    string res=check(str);
    cout<<res;
}

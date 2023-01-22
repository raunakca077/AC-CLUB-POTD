//Q_link:https://leetcode.com/problems/valid-palindrome/submissions/882630159/?fbclid=IwAR0ZfrY2a329koJjosp4q85pd7b81fL92euVsHwbcVT5XICrKJkRvSwYygw


//Approch : making a new vector of a array

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
            v.push_back(s[i]);}
        else if((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
           v.push_back(s[i]);}
        for(int i=0;i<v.size()/2;i++)
    {
        if(v[i]!=v[v.size()-i-1])
        return false;
    }return true;
    }
};

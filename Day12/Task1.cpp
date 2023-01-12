//To check prefixes of two string


//Q_link:https://leetcode.com/problems/count-prefixes-of-a-given-string/?fbclid=IwAR3cCLvG-jOFbknnXIAkqZ2wqGah-A4jxe9glEX-RbtPA3l3D0OKwstMmHE


//Approach:using one for loop and taking substring


class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int count=0;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]==s.substr(0,w[i].size()))
            count++;
        }
        
        return count;
    }
};

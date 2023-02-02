//1662. Check If Two String Arrays are Equivalent




class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string a="";
        string b="";
        for(auto i:w1)
        {
            a=a+i;
        }
        for(auto i:w2)
        {
            b=b+i;
        }
        if(a==b)
        return true;
        return false;
    }
};

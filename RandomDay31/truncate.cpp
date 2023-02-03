//1816. Truncate Sentence


class Solution {
public:
    string truncateSentence(string s, int k) {
        char t=' ';
        int c=0;
        string s2;
        for(auto i:s)
        {
           
                if(i==t)
                c++;
                 if(c==k)
                 break;
                s2=s2+i;
        }return s2;
    }
};

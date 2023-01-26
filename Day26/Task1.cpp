//1876. Substrings of Size Three with Distinct Characters


//Q link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/?fbclid=IwAR1T0h7S8UBYWcH9xNR844qDVft0Rwxt2pKkQVwj9lgQigWWfmyGsxoyYnI



class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=1,k=2,c=0;
        if(s.size()<3)
        return 0;
        for(;i<s.size()-2;i++)
        {
            if(s[i]!=s[j]&&s[i]!=s[k]&&s[j]!=s[k])
            {
                c++;
            }
           
                j++;
                k++;
            
        }return c;
    }
};

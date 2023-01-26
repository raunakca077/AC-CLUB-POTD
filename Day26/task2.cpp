//2379. Minimum Recolors to Get K Consecutive Black  
//https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/?fbclid=IwAR3hmw0RFPQm8GyrnokM_hIiIS54tzbMN_5z9YedS-6WAtao-oBWOVMVOsc





class Solution {
public:
    int minimumRecolors(string b, int k) {
        int n=b.size(),wc=INT_MIN;
        if(n<k)
        return -1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]=='B')
            c++;
            if(i>=k&&b[i-k]=='B')
            c--;
            wc=max(wc,c);
        }
        return k-wc;
    }
};

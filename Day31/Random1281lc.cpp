class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0,p=1;
        while(n)
        {
            int r=n%10;
            s=s+r;
            p=p*r;
            n/=10;
        }
        return p-s;
    }
};

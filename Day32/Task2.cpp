//https://leetcode.com/problems/find-the-duplicate-number/description/?fbclid=IwAR0oCX4H6oV9PstZqOnpmuNTYZihQRPDZ2A71xCaeyghnEM1bC2sLWTT6Z4

//287. Find the Duplicate Number


class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int arr[100005]={0},k;
        for(int i:n)
        {
            arr[i]++;
        }
        for(int i=0;i<size(arr);i++)
        {
            if(arr[i]>=2)
            {
                k=i;
                break;
            }
        }return k;

    }
};

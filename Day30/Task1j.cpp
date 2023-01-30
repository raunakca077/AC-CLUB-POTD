//1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/?fbclid=IwAR2OgRzKkdel7-MUfq2r59N1t4PBDmIz3DV4mzPSz7y71Wid3CtWSxjfXNk

class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int c=0;
        int sum=0;
        int i=0,j=0;
        while(j<a.size())//can also use for loop
        {sum+=a[j];
            if(j-i+1<k)
            j++;
            else if(j-i+1==k){
            if(sum/k>=t)
            c++;
            sum-=a[i];
            i++;
           j++;
            }

        }return c;
    }
};

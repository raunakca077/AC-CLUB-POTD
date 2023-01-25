//merge two sorted array

//Q_link:https://leetcode.com/problems/merge-sorted-array/description/?fbclid=IwAR0p7epRJjXRPUbYLdfkPUsqwrdC98rhG7OMw72Ox1-qLCF9ZD8bW7BnUvQ


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(auto i:nums2)
       {
           nums1[m++]=i;
       }
        sort(nums1.begin(),nums1.end());
    }
};

//TC -O(nlogn)
//SC - O(1)


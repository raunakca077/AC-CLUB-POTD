class Solution {
public:
    int sumOfUnique(vector<int>& n) {int sum=0;
        int arr[101]={0};
        for(auto i:n)
        {
            arr[i]++;
        }
       for(int i=0;i<101;i++)
       {
           if(arr[i]==1)
           sum=sum+i;
       }return sum;
    }
};

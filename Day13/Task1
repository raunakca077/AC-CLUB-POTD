//Q_link: https://leetcode.com/problems/maximum-ice-cream-bars/?fbclid=IwAR3z5XnStxJpwohJhZ6VVvmaJpoqICKv4Il7Cn_ifKIyQvJDeJOisC0T3XA


//Approcah :using sort and single  for loop


class Solution {
public:
    int maxIceCream(vector<int>& cp, int c) {
        int n=cp.size();
        int count=0;
        int i, j, min, temp;
       sort(cp.begin(),cp.end());
  int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+cp[j];
            if(sum<=c)
            count++;
            else
            break;

        }

        return count;
    }
};

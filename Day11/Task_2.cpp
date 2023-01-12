//To return intersection of two array and elements must be unique


//Q_link:https://leetcode.com/problems/intersection-of-two-arrays/?fbclid=IwAR0oIHfFNoFeuEQWzQfMHHcEk0sxqC7Nx3k5LkqgQuLN8Uir4hStH4-CMd4

//Approach : By making third array


class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {int s1=n1.size();vector<int>v;
    int s2=n2.size();
    int arr[1001]={0};
    for(auto x:n1)
    {if(arr[x]==0)
        arr[x]++;}
        for(auto x:n2){
            if(arr[x]==1)
        arr[x]++;

        }
        for(int i=0;i<=1000;i++)
        {
            if(arr[i]>1)
            v.push_back(i);
        }
    return v;        
    }
};


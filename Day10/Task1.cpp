//To swap elements

//Q_link : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?fbclid=IwAR1_nTbRNWDp96DIJ7w5OktGOoHqQymhhWXms4-ApqsqtP9F5rTy06w1pgo


class Solution{
    public:
    
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=0;i<n/2*2;i+=2)
        {
           swap(arr[i],arr[i+1]) ;
        }
        
    }
};

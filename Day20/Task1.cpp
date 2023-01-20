//To count no of prime numbers

//Q_link: https://leetcode.com/problems/count-primes/submissions/881843087/?fbclid=IwAR3sXA73RssLtmddeX-yFoyEIzvH1XEfdXCZVLFuwHYjkdgYGnF2_m_kPSU

//Approach: prime sieve algo

class Solution {
public:

    int countPrimes(int n) {
       vector <bool>arr(n+1,1);
        int c=0;
        for(int i=2;i<n;i++)
        {  if(arr[i])
            for(int j=2*i;j<n;j+=i){
            arr[j]=false;
            }
        }for(int i=2;i<n;i++)
        if(arr[i]==1)
        c++;
        return c;
    }
};
Console


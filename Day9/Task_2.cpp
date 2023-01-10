//To get sum of prime digits

// Q_link: https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1?fbclid=IwAR3lYhIvjr7AVkSHLk9WsBdf18N8yR873OUqWo4gI1QGaXXKOh2xUm2yrKk



int prime(int n)
        {if(n==1)
        return 0;
            for(int i=2;i<=n/2;i++)
            {
              if(n%i==0)  
              return 0;
            }
            return 1;
        }
class Solution{
public:
    int primeSum(int n){
        
    int sum=0,rem,k=n;
    while(n)
    {
        
        rem=n%10;
        if(prime(rem)){
            sum=sum+rem;
        }
        
        n/=10;
    }return sum;
    }
};

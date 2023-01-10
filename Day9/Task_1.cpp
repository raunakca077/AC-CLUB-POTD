// To check if the number is in the power of 2


//Q_link :https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1?fbclid=IwAR03gWKkVJ8Q6BZf9s5U0hRqV3SlCxBsbworn_THOdg8-HAH-0wskgep6wo

//Aproach: using loop for even numbers.

class Solution{
    public:
    
    bool isPowerofTwo(long long n){
        if(n==1||n==2)
        return 1;
       if(n%4==0)
        for(int i=2;i<=sqrt(n);i++)  
        {
            if(n==pow(2,i))
            {
                
                return 1;
            
            }
        }return 0;}
       
};

// To convert 0's to 5's


//Q_link : https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?fbclid=IwAR1P5yLXWDSQzbgk3infOHBZoydmGPM_GmsbfXLgBOe7EiRPG8J8AxI_oDY

//approach: using remainder


    int k=1,rem,num=0;
    while(n){
       rem=n%10;
       if(rem==0)
       rem=5;
       num=rem*k+num;
        n/=10;
        k*=10;
    }
    return num;
}

// To find elemen that appeared once

//Q_link :https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once&fbclid=IwAR04kj2KRoOz4Hoz4Ffo63AdTckx5huqcZcHjt-IDQRfOxuMu0qt9kRqbMk


//Approach : using xor operator


class Solution{
public:	
	int search(int A[], int N){
	    int s=0;
	   for(int x=0;x<N;x++) 
	   s=s^A[x];
	   return s;
	}
};


//TC : O(n)


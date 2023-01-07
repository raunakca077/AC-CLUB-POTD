//To check if element is present in array

//Q_link : https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&fbclid=IwAR0lrqX_55ficxPizrpBXtLpWkhvRDzNY6bSs5nGOLcj3Pn6sv4OFlkZJH0

Approach: using single for loop with if condition

 int searchInSorted(int arr[], int N, int K) 
    { 
    
   for(int x=0;x<N;x++)
   {
       if(arr[x]==K)
       return 1;
   }
       return -1;
    }TTt

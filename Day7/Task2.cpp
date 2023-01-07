// To find the missing number

//Q_link :https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number&fbclid=IwAR2G2UE4Suu0oiBDlLWX72b1g9OitEnppaU8KDirW8uBE6oDSdFz3FWWEOc


//Approach : Creating a 2nd array and making its element to 1 which are present in existing array


int missingNumber(int A[], int N)
{
    int arr[N+1]={0};
    for(int i=0;i<N-1;i++)
    {
        arr[A[i]]++;
    }
 for(int i=1;i<N+1;i++)
    {
     if(arr[i]==0)
     return i;
    }
 
    
}

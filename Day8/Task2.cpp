//To push zeros at last

//Q_link :https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array&fbclid=IwAR10Vu_w7thuT-GmsgbwaPS6kM8QE5c9VtPLjk1maRgRYaiBFC_nJPxYEgo


//Approach: swapping each element  for moving non zerodigit forward,if digit is at right place then it will be swapped to the same place




class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	           swap(arr[i],arr[j]);
	           j++;
	        }
	    }
	}
};



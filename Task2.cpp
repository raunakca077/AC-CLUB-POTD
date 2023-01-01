

vector<int> minAnd2ndMin(int a[], int n) {
    int min1=INT_MAX,min2;
   
    for(int i=0;i<n;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2 && a[i]!=min1)
        {
            min2=a[i];
        }
    }

     if((n>1&&min1!=min2)&&min2!=INT_MAX)
     return vector<int> {min1, min2};
     else
     return vector<int> {-1};
    
    
}
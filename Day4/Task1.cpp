//Hollow triangle printing

#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    cout<<"*";
    cout<<endl;
    for(int i=1;i<n/2+1;i++)
    {
        for(int j=0;j<i;j++)
        cout << " ";
        cout<<"*";
        if(i==n/2)
        break;
         for(int k=0;k<n-2*(i+1);k++)
         cout << " ";
         cout << "*"<<endl;
    }
}

//Time complexity = O(n^2/2)

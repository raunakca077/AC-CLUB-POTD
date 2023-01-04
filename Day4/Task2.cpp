//To rotate a matrix

//Q_link :https://leetcode.com/problems/rotate-image/?fbclid=IwAR3N4tv3dtkiqyMU48i9xtOlg_kYP04RS28DgTIbQgdMtylgmXcYUAPK6hY

//Approach : Take transpose of matrix then reverse each row

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                temp=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        }
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n/2;j++){
             temp=m[i][j];
             m[i][j]=m[i][n-1-j];
             m[i][n-1-j]=temp;
         }}
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               cout << m[i][j];
            }
        }
    }
};

//Time Complexity : O(n^2/2)
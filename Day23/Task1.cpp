//Q_link:https://leetcode.com/problems/spiral-matrix/?fbclid=IwAR054KvcyZNhB4YqTAalF1JZm9PS1QQGWJQpBA9Msegk3RSlgywE2WkKCZw




class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {vector<int>v;
        int dir=1;
        int top=0,bottom=m.size()-1;
        int left=0,right=m[0].size()-1;
        while(top<=bottom&&left<=right)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(m[top][i]);
                }top++;
                dir=2;

            }else if(dir==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v.push_back(m[i][right]);}
                right--;
                dir=3;

            }else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(m[bottom][i]);
                }bottom--;
                dir=4;

            }else if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(m[i][left]);
                }left++;
                dir=1;

            }

        }
return v;

    }
};

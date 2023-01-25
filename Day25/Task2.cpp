//Maximum Matching of Players With Trainers


//Q_link:https://leetcode.com/problems/maximum-matching-of-players-with-trainers/description/?fbclid=IwAR3YedG1PZe_bb54soOOG7xbrDRQjy604lv-udOn3o3QSg587XCmfcIUkIU

//Approach:two pointer

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int i=0,j=0,mx=0;
        while(i<p.size()&&j<t.size())
        {
            if(p[i]<=t[j])
            {
                mx++;
                i++;
                j++;
            }
            else
            j++;
        }return  mx;
    }
};



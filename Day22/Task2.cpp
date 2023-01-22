//Approach : using set


//Q_link:https://leetcode.com/problems/contains-duplicate/submissions/883144219/?fbclid=IwAR07Zu1qOYk75wMJXHtmv9J8ZF-t5ulCk7VG-jqf-v5tXnsI-rg11ERaVd4


class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
       set<int>s;
for(auto i:n)
{
    s.insert(i);
}
if(s.size()<n.size())
return true;
return false;
    }
};

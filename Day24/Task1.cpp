//2sum




class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {vector<int>v,v2;
    vector<int>p;
    v=n;
    sort(v.begin(),v.end());
        int n2=n.size();
        int i=0,j=n2-1;
     while(i<j)
     {
         if(v[i]+v[j]==t)
         {
             v2.push_back(v[i]);
             v2.push_back(v[j]);
             break;
         }
         else if(v[i]+v[j]<t)
         i++;
         else
         j--;

     }for(i=0;i<n2;i++)
     {
         if(v2[0]==n[i]){
        p.push_back(i);
        break;}}for(int k=0;k<n2;k++){
         if(v2[1]==n[k]&&k!=i){
         p.push_back(k);
         break;}

     }return p;
       
    } 
};

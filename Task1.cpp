class Solution {
public:
int v(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    return 1;
    return 0;
}
    string reverseVowels(string s) {int i=0,j=s.size()-1;
    for(;i<=j;)    
    {
        if(v(s[i])==1&&v(s[j])==1){
        swap(s[i],s[j]);
        i++;
        j--;}
      else if(v(s[i])==1&&v(s[j])==0)
        j--;
        else if(v(s[i])==0&&v(s[j])==1)
        i++;
        else if(v(s[i])==0&&v(s[j])==0)
{i++;
j--;}
    }return s;
    }
};
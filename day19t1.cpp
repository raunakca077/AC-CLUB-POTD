class Solution {
public:
    bool areOccurrencesEqual(string s) {int c=0;
      set <int>a;
      for(int i=0;i<s.size();i++){int c=0;
      for(int j=0;j<s.size();j++)
      {if(s[i]==s[j])
      c++;
      }a.insert(c);}
       if(a.size()==1)
       return true;
       return false;
    }
};

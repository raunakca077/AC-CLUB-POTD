//Noldbach problem


//Q_link:https://codeforces.com/problemset/problem/17/A

#include<iostream>
#include<vector>
using namespace std;

    int main(){
     int n,c;
        cin>>n>>c;
        int k=0;
        vector<bool>arr(n+1,1);
        vector<int>v;
        for(int i=2;i*i<=n;i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=n;j+=i)
                arr[j]=0;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(arr[i])
            v.push_back(i);
        }
        for(int i=0;i<v.size()-1;i++)
        {
        for(int j=0;j<v.size();j++)
        {
            if(v[i]+v[i+1]==v[j]-1)
             k++;
        }
        }if(k>=c)
        cout<<"YES";
        else
        cout<<"NO";
    }

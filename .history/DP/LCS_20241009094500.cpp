#include<bits/stdc++.h>
using namespace std;


int Recrse(string s1,string s2,int n ,int m){
    if(n == 0 || m == 0)return 0;

    // if(m == 0)return 0;

    if(s1[n-1] == s2[m-1]){
        return 1 + Recrse(s1,s2,n-1,m-1);
    }
    return max(Recrse(s1,s2,n-1,m) , Recrse(s1,s2,n,m-1));
}
int main(){

    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();

    int m = s2.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    cout<< Recrse(s1,s2,n,m);

    return 0;
}
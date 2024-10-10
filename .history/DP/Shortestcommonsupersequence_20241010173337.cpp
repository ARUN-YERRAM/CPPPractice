#include<bits/stdc++.h>
using namespace std;

int RecrseTab(string s1,string s2,int n,int m){

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }return dp[n][m];
}

int main(){

    string s1 = "abcdef";
    string s2 = "abcdgh";

    int n = s1.length();

    int m = s2.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    cout<< Recrse(s1,s2,n,m);

    cout<<RecrseMem(s1,s2,n,m,dp);

    cout<<RecrseTab(s1,s2,n,m);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;

    vector<long long int>t;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        t.push_back(a);
    }
    long long int sum = 0;
    long long int cnt = 0;
    map<long long int,long long int>mp;
    mp[0] = 1;
    // hammeee.................    mappp................         bolthaaa.....................
    for(int i=0;i<n;i++){
        sum += t[i];

        if(mp.find((sum - x)) != mp.end()){
            cnt += mp[sum-x];
        }
        // for(int j=i;j<n;j++){
            // sum += t[j];
            // if(sum == x)cnt++;
        // }
        // 5 7
// 2 -1 3 5 -2
        mp[sum]++;
    }
    cout<<cnt<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int a,b;
        cin>>a>>b;
        if(a == 0 && b == 0)cout<<"NO"<<endl;
        if(a == 0 || b == 0)cout<<"NO"<<endl;
        else if(a <= 2*b || b<= 2*a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n,k,x;
        bool flag=false;
        vector<int>vec;
        int f,ans;
        int rem=n%k;
        int quo=n/k;
        f=k;
        while(k>0){
            if(k==x) continue;
            if(rem%k==0){
                ans = k;
                flag = true;
            } 
            k--;
        }
        if(flag){
            for(int i=0;i<quo;i++){
                vec.push_back(f);
            }
            for(int i=0;i<rem/ans;i++){
                vec.push_back(ans);
            }
        }
    } 

    return 0;
}
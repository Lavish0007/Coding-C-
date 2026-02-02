#include<bits/stdc++.h>
using namespace std;
int summ(vector<int>&arr,int t){
    unordered_map<int,int>mp;
    int sm=0;
    for(int i=0;i<arr.size();i++){
        int need = t-arr[i];
        if(mp.find(need)!=mp.end()){
            sm = i + mp[need];
        }
        mp[arr[i]]=i;
    }
    return sm;
}

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=summ(arr,t);
    cout<<res;
    return 0;
}
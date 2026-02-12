#include<bits/stdc++.h>
using namespace std;
int Lucky(vector<int>&vec){
    unordered_map<int,int>mp;
    for(int val:vec){
        mp[val]++;
    }
    int mx=INT_MIN,ans=-1;
    for(auto it:mp){
        if(it.first==it.second){
            ans=it.first;
            mx=max(mx,ans);
        }
    }
    return mx;
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    cout<<Lucky(vec);

    return 0;
}
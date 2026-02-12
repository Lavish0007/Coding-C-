#include<bits/stdc++.h>
using namespace std;
int Pair1(vector<int>&vec,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    int ans=0;
    for(auto it:mp){
        int x=it.first;
        if(mp.find(x+k)!=mp.end()){
            ans+=mp[x+k]*mp[x];
        }
    }
    return ans;
    
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    cout<<Pair1(vec,k);

    return 0;
}
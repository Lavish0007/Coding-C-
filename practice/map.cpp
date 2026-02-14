#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aabcbbca";
    unordered_map<char,int>mp;
    int mx=-1,smx=-1;
    for(char c:s){
        mp[c]++;
        mx=max(mx,mp[c]);
        if(mp[c]!=mx){
            smx=max(smx,mp[c]);
        }
    }
    cout<<mx<<" "<<smx;
    for(auto &it:mp){
        it.second-=smx;
        
    }
    string ans="";
    for(auto it:mp){
        if(it.second>0){
            ans.insert(0,it.second,it.first);
        }        
    }
    cout<<ans;
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>mp; 
    string s="aAabB";
    for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
    }
    for(auto it:mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
    return 0;
}
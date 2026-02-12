#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>mp; 
    mp.insert({'a',1});
    for(auto it:mp){
        cout<<it.first<<" "<<it.second;
    }
    return 0;
}
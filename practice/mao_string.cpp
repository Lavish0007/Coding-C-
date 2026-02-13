#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>mp; 
    mp.insert({'a',1});
    mp.insert({'A',1});
    for(auto it:mp){
        cout<<it.first-32<<" ";
    }
    return 0;
}
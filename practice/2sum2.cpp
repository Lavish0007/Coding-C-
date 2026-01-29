#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,7}; 
    unordered_map<int,int>mp;
    int t=7;
    for(auto it:arr){
        if(mp.find(t-it)!=mp.end()){
            cout<<"yes"<<endl;
            return 0;
        }
        mp[it]++;
    }
    cout<<"no"<<endl;
    return 0;
}
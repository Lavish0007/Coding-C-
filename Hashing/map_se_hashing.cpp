#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={18,4,1,1,4,2,1} ;
    map<int,int>mp;
    for(int i=0;i<7;i++){
        mp[arr[i]]++; //will increase the frequency
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}
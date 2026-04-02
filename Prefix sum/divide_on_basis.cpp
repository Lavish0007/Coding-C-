#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={3,4,-2,5,8,20,-10,8}; 
    int sum=0;
    for(int val:vec) sum+=val;
    if(sum%2!=0){
        cout<<"No";
        return 0;
    }
    int n=vec.size();
    sum=sum/2;
    vector<int>pref;
    pref.resize(n);
    pref[0]=vec[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vec[i];
        if(pref[i]==sum){
            cout<<"True from "<<i<<" "<<pref[i];
            return 0;
        }
    }
    
    cout<<"No";
    return 0;
}
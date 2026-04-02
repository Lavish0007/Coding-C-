#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5}; 
    vector<int>prefix(arr.size());
    prefix[0]=arr[0];
    prefix[1]=arr[1];
    for(int i=1;i<arr.size();i++){
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int v:prefix){
        cout<<v<<" ";
    }
    return 0;
}
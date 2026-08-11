#include<bits/stdc++.h>
using namespace std;
void subsequence(int i , vector<int>&curr , vector<int>&arr ,int n){
    if(i==n){
        for(auto x:curr) cout<<x<<" ";
        cout<<endl;
        return;
    }
    curr.push_back(arr[i]);
    subsequence(i+1,curr,arr,n);
    curr.pop_back();
    subsequence(i+1,curr,arr,n);
}
int main(){
    vector<int>arr = {3,1,2};
    vector<int>curr;
    int n = arr.size();
    subsequence(0,curr,arr,n);
    return 0;
}
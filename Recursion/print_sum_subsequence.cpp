#include<bits/stdc++.h>
using namespace std;
void subsequence(int i , vector<int>&curr , vector<int>&arr ,int n , int sum, int target){
    if(i==n){
        if(sum==target){
            for(auto x:curr) cout<<x<<" ";
            cout<<endl;
        }
        return;
    }
    curr.push_back(arr[i]);
    sum+=arr[i];
    subsequence(i+1,curr,arr,n,sum,target);
    curr.pop_back();
    sum-=arr[i];
    subsequence(i+1,curr,arr,n,sum,target);
}
int main(){
    vector<int>arr = {1,1,2};
    vector<int>curr;
    int n = arr.size();
    int sum=0, target =2;
    subsequence(0,curr,arr,n,sum,target);
    return 0;
}
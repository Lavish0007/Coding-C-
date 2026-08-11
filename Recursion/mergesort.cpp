#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr , int low ,int mid, int high){
    
    vector<int>temp;
    int j=0;
    int left=low,right=mid+1;
    while(left<=mid  and right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid ){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){ 
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergesort(vector<int>&arr , int low , int high){
    if(low<high){
        int mid = low + (high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    vector<int>arr={2,4,5,1,3,7,3,5,12,1}; 
    int n = arr.size();
    int low = 0;
    int high = n-1;
    mergesort(arr,low,high);
    for(int x:arr) cout<<x<<" ";
    return 0;
}
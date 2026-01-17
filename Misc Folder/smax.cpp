#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,4,2,6,80,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN,smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            smx=mx;
            mx=arr[i];
        }
        else if(arr[i]<mx && arr[i]>smx){
            smx=arr[i];
        }
    }
    cout<<smx;    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int sum=0,mx=INT_MIN;
    int n=sizeof(arr)/sizeof(arr[0]);
    int start,arrstart=-1,arrend=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>mx){
            mx=sum;
            arrstart=start,arrend=i;
        }
        if(sum<0){
            sum=0;
        }

    } 
    cout<<mx<<endl;
    for(int i=arrstart;i<=arrend;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
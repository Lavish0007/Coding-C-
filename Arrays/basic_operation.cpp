#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,5,7,4,0}; 
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<*max_element(arr,arr+s);
    cout<<endl;
    for(int i=s-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
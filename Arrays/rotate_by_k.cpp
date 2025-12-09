#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int arr[]={1,2,3,4,5,6,7};
    for(int j=0;j<k;j++){
        for(int i=1;i<7;i++){
            swap(arr[i],arr[i-1]);
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}
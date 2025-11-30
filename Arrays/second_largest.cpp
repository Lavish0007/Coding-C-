#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={4,8,77,1,6}; 
    int l=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    int sl=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=l){
            if((arr[i]>sl)){
                sl=arr[i];
            };
        }
    }
    cout<<sl<<" ";


    return 0;
}
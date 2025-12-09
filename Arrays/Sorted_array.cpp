#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5};
    for(int i=1;i<6;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else{
            cout<<"not sorted";
            return 0;
        } 
    }
    cout<<"Sorted";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void ins_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        int didswap=0; //optimization condition
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
    
        }
        if(didswap==0){ // if no swap in first iteration then array already sorted
            break;
        }
        cout<<"runs\n"; 
    }
}

void sel_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mn=i;
        for(int j=i+1;j<n;j++){
            if(arr[mn]>arr[j]){
                mn=j;
            }
        }
        swap(arr[mn],arr[i]);
        
    }
}

int main(){
    int arr[]={9,13,45,52,10};
    int k=5;
    bubble(arr,k);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }     

    return 0;
}
































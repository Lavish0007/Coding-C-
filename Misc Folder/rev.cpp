#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,4,2,6,80,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     

    return 0;
}
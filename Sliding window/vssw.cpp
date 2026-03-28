#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={5,8,4,1,8,2};
    int sum=0;
    int mx=0;
    int i=0,j=0,k=5; 
    while(j<arr.size()){
        sum+=arr[j];
        if(sum<k) j++;
        else if(sum==k){
            mx=max(mx,j-i+1);
            j++;
        }
        else{
            while(sum>k){
                sum-=arr[i];
                i++;
            }
            j++;
        }
    }
    cout<<mx;

    return 0;
}
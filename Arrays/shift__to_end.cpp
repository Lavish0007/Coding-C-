#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={0,1,1,1,0,4,2,0,4,0};
    int n=arr.size();
    vector <int>temp;
    for(int val:arr){
        if(val!=0){
            temp.push_back(val);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<arr.size();i++){
        arr[i]=0;
    }
    for(int val:arr){
        cout<<val<<" ";
         }
    return 0;
}
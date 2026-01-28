#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1,0,7,0,2,3,12}; 
    int j=-1,n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0) j=i;
        break;
    }
    if(j==-1) return 0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(int val:v){
        cout<<val<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,5,2,3}; 
    int k=3,sum=0,mxsm=-1;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int left=0,right=k;
    while(right<v.size()){
        sum-=v[left];
        sum+=v[right];
        left++;
        right++;
        mxsm=max(mxsm,sum);
    }
    cout<<mxsm;

    return 0;
}
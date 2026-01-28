#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=3;
    vector<int>v={1,2,3,4,5,6,7}; 
    int n=v.size();
    k=k%n;
    vector<int>ans(n,0);
    for(int i=0;i<n-k;i++){
        ans[i]=v[i+k];
    }
    int a=0;
    for(int i=n-k;i<n;i++){
        ans[i]=v[a];
        a++;
    }
    for(int val:v){
        cout<<val<<" ";
    }
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    // reverse(v.begin(),v.end());
    return 0;
}
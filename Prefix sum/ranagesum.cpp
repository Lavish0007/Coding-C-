#include<bits/stdc++.h>
using namespace std;
int main(){
    // range sum query 
    vector<int>vec={1,2,3,4,8,4,5,1,2};
    for(int i=1;i<vec.size();i++){
        vec[i]=vec[i]+vec[i-1];
    }
    // for(int val:vec) cout<<val<<" ";
    cout<<vec[5]-vec[2];
    return 0;
}
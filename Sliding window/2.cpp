#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={-1,0,-2,3,-4,6,7,5,-1};
    vector<int>ans;
    
    for(int val:ans) cout<<val<<" ";
    
    return 0;
}

//BRUTE FORCE

// vector<int>temp;
// int k=3;
// int n=vec.size();
// for(int i=0;i<k;i++){
//     if(vec[i]<0){
//         ans.push_back(vec[i]);
//         break;
//     }
//     if(vec[k-1]>=0) ans.push_back(0);
// }
// for(int i=1;i<n-k+1;i++){
//     for(int j=i;j<i+k;j++){
//             if(vec[j]<0){
//                 ans.push_back(vec[j]);
//                 break;
//             }
//             if(j-i+1==k and vec[j]>=0){
//                 ans.push_back(0);
//             }


        
//     }
// }
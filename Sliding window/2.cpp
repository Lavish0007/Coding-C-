#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={-1,0,-2,3,-4,6,7,5,-1};
    vector<int>ans;
    queue<int>q;
    int i=0,j=0,n=vec.size(),k=3;
    while(j<n){
        // Calculation
        if(vec[j]<0) q.push(vec[j]);

        //less size of window
        if(j-i+1<k) j++;

        //Window size met
        else if(j-i+1==k){

            //deduce answer
            if(q.size()==0) ans.push_back(0);
            else{
                ans.push_back(q.front());
            }

            // slide window 
            
            if(vec[i]==q.front()) q.pop();
            i++;j++;
        }


    }
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
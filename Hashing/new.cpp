#include<bits/stdc++.h>
using namespace std;
int hashh[8];
int main(){
    int arr[7]={1,0,2,3,1,2,1};
    for(int i=0;i<7;i++){
        hashh[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
         cout<<hashh[num]<<endl;
    }
 

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int xor1=1^2^3^4^5;
    int xor2=0;
    for(int i=0;i<4;i++){
        xor2=xor2^arr[i];
    };
    int xo=xor1^xor2;
    cout<<xo<<endl;
}
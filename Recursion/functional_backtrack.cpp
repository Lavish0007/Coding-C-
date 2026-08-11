// this  is functional way to return the answer of sum

#include<bits/stdc++.h>
using namespace std;
int sumis( int n ){
    if(n==0) return 0;
    return n + sumis(n-1);
}
int main(){
    cout<< sumis(5);


    return 0;
}
// parameterised

#include<bits/stdc++.h>
using namespace std;
int sumton(int n,int sum){
    if(n==0) return sum;
    sumton(n-1,sum+n); 
}
int main(){
    cout<<sumton(5,0);
     

    return 0;
}
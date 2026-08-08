#include<bits/stdc++.h>
using namespace std;
void num1ton(int i,int n){
    if(i>n) return ;
    cout<<i<<" ";
    num1ton(i+1,n);
}
int main(){
     num1ton(1,5);

    return 0;
}
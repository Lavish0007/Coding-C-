// non tail recursion basically shows the back tracking

#include<bits/stdc++.h>
using namespace std;
void backnto1(int i,int n){
    if(i>n) return ;
    backnto1(i+1,n);
    cout<<i<<endl;
}
int main(){
     backnto1(1,5);

    return 0;
}
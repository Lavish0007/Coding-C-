#include<bits/stdc++.h>
using namespace std;
void nto1(int n){
    if(n==0) return;
    cout<<n<<endl;
    nto1(n-1);
}
int main(){
     nto1(5);

    return 0;
} 
#include<bits/stdc++.h>
using namespace std;
void print(string n,int cn){
    if(cn==5) return;

    cout<<n<<"  "<<cn<<endl;
    print(n,cn+1);
}
int main(){
     print("Lavish",0);

    return 0;
}
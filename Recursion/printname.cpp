#include<bits/stdc++.h>
using namespace std;
void print(int n, int cn){
    if(cn==0) return;
    cout<<n<<" "<<cn<<endl;
    n++; cn--; // learnt about post and pre incremental 
    print(n,cn);
    
}
int main(){
     print(1,5);

    return 0;
}
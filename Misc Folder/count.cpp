#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=408475504;
    int c=0;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        c++;
        n=n/10;
    } 
    cout<<"count of the dighits is : "<<c<<endl;
    cout<<"Reverse number of the number you input is : "<<rev<<endl;

    return 0;
}
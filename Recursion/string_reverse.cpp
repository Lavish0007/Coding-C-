#include<bits/stdc++.h>
using namespace std;
void strev(string str,int i){
    if(i>=str.size()) return ;

    strev(str,i+1);
    cout<<str[i]<<" ";
}

int main(){
    string str="abcd";
    strev(str,0); 
    return 0;
}
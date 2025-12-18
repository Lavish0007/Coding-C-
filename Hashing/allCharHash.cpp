#include<bits/stdc++.h>
using namespace std; //hashing for all characters
int main(){
    string s;
    cin>>s;
    int hash[256]={0}; // just take a 256 size array and now we dont need to minus 'a' from thee char 
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
     

    return 0;
}
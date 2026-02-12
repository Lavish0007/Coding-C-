#include <bits/stdc++.h>
using namespace std;
int mnus(int num){
    return -+num;
}
int main() {
    string s="   ababababab12";
    int n=s.size();
    string ans="";
    // s=ans+s.substr(1,n-2);
    // sort(s.begin(),s.end());
    // ans+=s.substr(0,4);
    // string a ="abc";
    // int n=mnus(0);
    // cout<<n<<endl;
    // int i=0,strt=0;
    // while(s[i]==' '){
    //     strt=i+1;
    //     i++;
    // }
    for(char c:s){
        cout<<c<<" ";
    }

}
#include <bits/stdc++.h>
using namespace std;
bool isp(string s){
    string fw=s;
    reverse(s.begin(),s.end());
    if(fw!=s) return false;
    return true;
}
int main() {
    // int freq[26]={0};
    // for(int i=0;i<26;i++){
    //     cout<<freq[i]<<" ";
    // }
    // cout<<'c'-'a';
    set<int>s={-1,-5,-4,2,0};
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl<<*s.begin();

}
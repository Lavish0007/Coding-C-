#include<bits/stdc++.h>
using namespace std;
void solve(string& s, int index){
    if(index>=s.size()) return;
    cout<<s[index]<<" ";
    solve(s,index+1);
}

int fib(int n){
    if(n==1 or n==2) return 1;
    return fib(n-1)+fib(n-2);
}

void printall(int i,vector<int>&arr,vector<int>&temp){
    if(i>=arr.size()){
        cout<<"[ ";
        for(int x:temp) cout<<x<<" ";
        cout<<"] "<<endl;
        return;
    }

    temp.push_back(arr[i]);
    printall(i+1,arr,temp);
    temp.pop_back();
    printall(i+1,arr,temp);

}


int main(){
    // string s="abcd"; 
    // solve(s,0);
    // cout<<fib(7);
    vector<int>arr={1,2,3};
    vector<int>temp;
    printall(0,arr,temp);
    return 0;
}
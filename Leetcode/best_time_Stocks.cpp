#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int mn=INT_MAX;
    int pro=0;
    for(int i=0;i<prices.size();i++){
        mn=min(mn,prices[i]);
        pro=max(pro,prices[i]-mn);
    }     
    return pro;

    
    
}
int main(){
    vector<int>v={7,1,5,3,16,4};
     cout<<maxProfit(v);

    return 0;
}

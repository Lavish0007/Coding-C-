// 2. Sum Equals to Sum

// Problem gist:
// Given an array, check whether two different pairs of elements exist such that the sum of one pair equals the sum of another pair.

// Example idea:
// a + b = c + d (all indices different)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int n=arr.size();
    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(mp.find(sum)!=mp.end()){
                auto p=mp[sum];
                if(p.first!=i and p.second!=i and p.second!=j and p.first!=j){
                    cout<<"YES \n";
                    return 0;
                }
            }
            else{
                mp[sum]={i,j};
            }
    
        }
        
    }
    cout<<"NO \n";
    return 0;

}
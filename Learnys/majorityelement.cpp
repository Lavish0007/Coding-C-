#include<bits/stdc++.h>
using namespace std;
int MajEven(vector<int>&vec){
    unordered_map<int,int>mp;
    int mx=INT_MIN,ans=-1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]%2==0){
            mp[vec[i]]++;

            if(mp[vec[i]]>mx){
                mx=mp[vec[i]];
                ans=vec[i];
            }
            else if(mp[vec[i]]==mx){
                ans=min(ans,vec[i]);
            }  
        }
                                                                                          
            
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    cout<<MajEven(vec);

    return 0;
}
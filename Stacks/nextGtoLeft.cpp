#include<bits/stdc++.h>
using namespace std;

vector<int>brute(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(nums[j]>nums[i]) ans[i]=nums[j];
        }
    }
    return ans;
}

vector<int> nextLargerElement(vector<int>& nums) {
        // code here'
        vector<int>ans;
        int n= nums.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()) ans.push_back(-1);
            
            else if(st.size()>0 and st.top()>nums[i]){
                ans.push_back(st.top());
            }
            
            else if(st.size()>0 and st.top()<=nums[i]){
                
                while(st.size()>0 and st.top()<=nums[i]){
                    st.pop();
                }
                
                if(st.empty()) ans.push_back(-1);
                else ans.push_back(st.top());
                
            }
            
            st.push(nums[i]);
        }
        return ans;
        
    }

int main(){
    vector<int>v = {1,3,2,4};
    vector<int>ans = brute(v);
    // reverse(ans.begin(),ans.end());
    for(int val:ans){
        cout<<val<<endl;
    }
}
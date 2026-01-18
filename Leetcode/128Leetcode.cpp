//128. Longest Consecutive Sequence optimal solution


#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int count=0,lastSmall=INT_MIN,longest=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            
            if(nums[i]-1==lastSmall){
                count++;
                lastSmall=nums[i];
            }
            else if(nums[i]!=lastSmall){
                count=1;
                lastSmall=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
        
    }
int main(){
    vector<int>nums={100,4,200,1,3,2};
    cout<<longestConsecutive(nums);


    
}
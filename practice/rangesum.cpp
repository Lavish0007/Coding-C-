#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>arr={1,2,-2,3,2,0};
     vector<int>presum;
     int sum=0;
     for(int val:arr){
        sum+=val;
        presum.push_back(sum);
     }
     cout<<presum[5]-presum[0];

    return 0;
}
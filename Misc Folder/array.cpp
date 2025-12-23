 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int>arr={1,2,3,1,1,1,1,3,3};
    int k=6,len=0;
    int i=0,j=0,sum=arr[i];
    while(j<arr.size()){
        while(i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            len=max(len,j-i+1);
        }
        j++;
        if (j<arr.size()) sum+=arr[j];


    }
    
    cout<<len;
     return 0;
    
 }

 // Brute
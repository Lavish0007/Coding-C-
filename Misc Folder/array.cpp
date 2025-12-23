 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int>arr={1,2,3,1,1,1,1,3,3};
    int k=6,len=0;
    int i=0,j=1,sum=arr[i];
    while(j<arr.size()){
        if(sum<k){
            sum+=arr[j];
            j++;
        }
        else if(sum==k){
            len=max(len,j-i+1);
            j++;
            sum+=arr[j];
        }
        else{
            sum-=arr[i];
            i++;
        }

    }
    
    cout<<len;
     return 0;
 }

 // Brute
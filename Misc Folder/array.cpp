 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int>arr={1,2,3,4,5,6};
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                cout<<arr[k]<<" ";
            }
            cout<<" -> "<<sum<<endl;
        }
        cout<<endl;
        
    }
     return 0;
 }
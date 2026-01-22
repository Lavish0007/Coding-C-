#include<bits/stdc++.h>
using namespace std;
vector<int>spiral(vector<vector<int>>& matrix){
    int rowstart=0,colend=matrix[0].size()-1,colstart=0,rowend=matrix.size()-1;
    vector<int>ans;
    while(rowstart<=rowend and colstart<=colend){
        
        //right
        for(int i=colstart;i<=colend;i++){
            ans.push_back(matrix[rowstart][i]);
        }     
        rowstart++;
        
        //down
        for(int i=rowstart;i<=rowend;i++){
            ans.push_back(matrix[i][colend]);
        }     
        colend--;
        
        if(rowstart<=rowend){
            //left
            for(int i=colend;i>=colstart;i--){
                ans.push_back(matrix[rowend][i]);
            }     
            rowend--;
        }
        
        if(colstart<=colend){
            //up
        
            for(int i=rowend;i>=rowstart;i--){
                ans.push_back(matrix[i][colstart]);
            }     
            colstart++;
           
        }

    }
    return ans;


}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>s=spiral( matrix);
    for(int val: s){
        cout<<val<<" ";
    }
     

    return 0;
}
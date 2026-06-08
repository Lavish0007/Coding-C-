#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

node* converttoll(vector<int>&arr){
    node* head = new node(arr[0]);
    node * mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp= new node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}



int main(){
    vector<int>arr={45,3,4,5};
    node* head = converttoll(arr);
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" "; 
        temp=temp->next;
    }
    return 0;
}
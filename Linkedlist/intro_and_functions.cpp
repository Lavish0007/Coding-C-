#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1, node* next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

node* convertll(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printit(node* head){
    if(head==nullptr) return;
    node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

node* deletehead( node* head){
    node* temp = head;
    head=head->next;
    free(temp);
    return head;
}

node* deletetail(node* head){
    if(head==NULL || head->next==NULL) return NULL;
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

int main(){
    vector<int>arr={902,3,5,8};
    node* head = convertll(arr);
    head = deletetail(head);
    // cout<<head->data;
    printit(head);

    return 0;
}
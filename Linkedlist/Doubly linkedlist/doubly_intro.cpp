#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* back;
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

void printdll(node* head){
    if(head==NULL) return;
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


node * converttodll(vector<int>& arr){
    node *head=new node(arr[0]);
    node * prev = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

node * deletehead(node* head){
    if(head==NULL||head->next==NULL) return NULL;
    node *prev = head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}

node * deletetail(node* head){
    if(head==NULL||head->next==NULL) return NULL;
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*prev = temp->back;
    prev->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

node * deleteatpos(node* head,int x ){
    if(head==NULL||(head->next==NULL and x==1)) return NULL;
    int cnt=0;
    node*temp=head;
    while(temp){
        cnt++;
        if(cnt==x) break;
        temp=temp->next;
    }
    node* prev = temp->back;
    node* front = temp->next;
    if(prev==NULL and front == NULL) return NULL;
    else if(prev==NULL) return deletehead(head);
    else if(front==NULL) return deletetail(head);
    else{
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        delete temp;
    }
    return head;


}


node* insertbhead(node* head,int val){
    node* newnode = new node(val,head,nullptr);
    head->back=newnode;
    return newnode;
}

node* insertbtail(node* head,int val){
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node * prev = temp->back;

    node* newnode = new node(val,temp,prev);
    temp->back=newnode;
    prev->next=newnode;
    return head;
}



int main(){
    vector<int>arr={1,9,2,3,4,5};
    node* head = converttodll(arr);
    head=insertbtail(head,4789);
    printdll(head);
    return 0;
}
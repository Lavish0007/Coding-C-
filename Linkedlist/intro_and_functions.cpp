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
node* deleteatk(node* head , int k){
    if(head==NULL) return head;
    node* temp=head;
    node* prev=NULL;
    if(k==1){
        head  = head->next;
        free(temp);
        return head;
    }
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

node* deleteEL(node* head , int k){
    if(head==NULL) return head;
    node* temp=head;
    node* prev=NULL;
    if(k==head->data){
        head  = head->next;
        free(temp);
        return head;
    }
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int>arr={902,3,5,8};
    node* head = convertll(arr);
    head = deleteEL(head,902);
    // cout<<head->data;
    printit(head);

    return 0;
}
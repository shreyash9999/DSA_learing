#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *insertbegning(Node *head, int x){
    Node *temp = new Node(x);
    temp -> next = head;
    return temp;
};
void printlist(Node *head){
    while(head != NULL){
        cout<<(head -> data)<<" ";
        head = head -> next;
    }
};

Node *insertend(Node *head,int x){
    Node *temp = new Node(x);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr -> next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return temp;
};

Node *delefirst(Node *head){
    if(head == NULL)
        return NULL;
    else{
        Node *temp = head ->next;
        delete head;
        return temp;
    }
}

Node *deleend(Node *head){
    if(head == NULL)
        return NULL;
    if(head->next ==NULL)
        return NULL;
    Node *curr = head;
    while(curr -> next -> next !=NULL){
        curr = curr ->next;
    }
    delete(curr->next);
    Node *temp = curr ->next;
    return temp;

};

Node *addpos(Node *head, int pos , int data){
    Node *temp = new Node(data);
    if(pos ==1){
        return temp;
    }
    Node *curr = head;
    for(int i; i<=pos-2 && curr!= NULL; i++){
        curr = curr->next;
    }
    if (curr==NULL)
        return head;
    temp -> next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = NULL;
    insertbegning(head,30);
    insertbegning(head,40);
    insertend(head,100);
    deleend(head);
    addpos(head,2,1000);
    //printlist(insertbegning(head,40));
    return 0;
}
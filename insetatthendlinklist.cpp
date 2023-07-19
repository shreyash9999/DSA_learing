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

int main(){
    Node *head = NULL;
    insertbegning(head,30);
    insertbegning(head,40);
    insertend(head,100);
    //printlist(insertbegning(head,40));
    return 0;
}
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

int main(){
    Node *head = NULL;
    insertbegning(head,30);
    insertbegning(head,40);
    printlist(insertbegning(head,40));
    return 0;
}
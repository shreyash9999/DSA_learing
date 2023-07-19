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

int main(){
    Node *Head = new Node(20);
    Node *temp1 = new Node(30);
    Node *temp2 = new Node(40);
    Head -> next = temp1;
    temp1 -> next = temp2; 
    return 0;
}
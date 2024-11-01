#include<iostream.h>
class Node{
    public:
        int data;
        Node * next;
    Node(int data){            // Constructor for a node with only data provided, next initialized to nullptr
        this->data=data;
        next=nullptr;
    }
    Node(int data,Node *next){ // Constructor for a node with both data and next node provided
        this->data=data;
        this->next=next;
    }

};

void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHeadNode(Node* head,int val){
    Node* newNode=new Node(val,head);
    return newNode;
}


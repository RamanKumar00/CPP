#include<iostream>
using namespace std;
 struct Node{
    int data;
    Node * next;

    Node(int d)
    {
        data=d;
        next=nullptr;
    }
 };
 void insertAtHead(Node*&Head,int d)
 {
    Node *newNode=new Node(d);
    newNode->next=head;
    head=newNode;
 }
 void print (Node *head)
 {
    Node*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
 int main()
 {
    Node*head=nullptr;

    insertAtHead(head,12);
    print(head);
    return 0;
 }
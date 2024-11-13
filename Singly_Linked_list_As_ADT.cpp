#include <iostream>
using namespace std;


class Node {
public:
    int data;         
    Node* next;       

    
    Node(int newData) {
        data = newData;
        next = nullptr;
    }
};


void insertAtHead(Node** head, int newData) {
    
    Node* newNode = new Node(newData);

   
    newNode->next = *head;

    
    *head = newNode;
}


void printList(Node* head) {
    Node* temp = head;
     
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main() {
  
    Node* head = nullptr;

 
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

   
    cout << "Linked List: ";
    printList(head);

    return 0;
}

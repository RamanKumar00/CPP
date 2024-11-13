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

void insertAtTail(Node** head, int newData) {
    Node* newNode = new Node(newData);  
    if (*head == nullptr) {
        
        *head = newNode;
        return;
    }

   
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

   
    temp->next = newNode;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main() {
    Node* head = nullptr;  

    insertAtTail(&head, 40);
    insertAtTail(&head, 50);

   
    cout << "Linked List: ";
    printList(head);

    return 0;
}

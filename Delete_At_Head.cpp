#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

void deleteNode(Node* &head, int pos) {
   
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;  
        delete temp;        
        return;
    }

 
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < pos && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

   
    if (curr == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }

    
    prev->next = curr->next;
    curr->next = NULL; 
    delete curr;       
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    deleteNode(head, 2);

    cout << "List after deleting node at position 2: ";
    printList(head);

    deleteNode(head, 1); 

    cout << "List after deleting node at position 1: ";
    printList(head);

    return 0;
}

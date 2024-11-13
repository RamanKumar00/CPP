#include <iostream>
using namespace std;

// Define a Node structure
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with data
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

// Function to insert a new node at the head of the list
void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Function to print the linked list
void print(Node*& head) {
    Node* temp = head;
    while (temp != nullptr) {  // Use 'nullptr' instead of 'null'
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10); // Corrected 'Node *node1' to 'Node* node1'
    Node* head = node1; // Initialize head with the first node
    print(head);

    insertAtHead(head, 12);
    print(head); // Corrected 'print head' to 'print(head)'

    return 0;
}

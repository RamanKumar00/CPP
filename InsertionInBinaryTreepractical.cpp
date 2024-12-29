#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


node* insertInBT(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    }

    if (root->left == NULL) {
        root->left = new node(val);
    } else if (root->right == NULL) {
        root->right = new node(val);
    } else {
       
        insertInBT(root->left, val);
    }
    return root;
}


void takeInput(node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertInBT(root, data);
        cin >> data;
    }
}


void Inorder(node* root) {
    if (root == nullptr) {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main() {
    node* root = NULL;

    cout << "Enter elements for the binary tree:" << endl;
    takeInput(root);

    cout << "Inorder traversal of the binary tree:" << endl;
    Inorder(root);
    cout << endl;

    return 0;
}

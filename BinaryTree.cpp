#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
node *buildTree(node *root)
{
    cout << "enter the data: ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    root = new node(data);
    cout << "enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
int main()
{
    node *root = nullptr;
    root = buildTree(root);
    return 0;
}
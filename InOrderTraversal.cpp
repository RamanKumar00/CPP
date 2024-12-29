#include <iostream>
#include <queue>
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
        this-> left = nullptr;
        this->right = nullptr;
    }
};
node *buildTree(node *root)
{
    cout << "enter the data: ";
    int data;
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "enter the data to inserting to the left " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the data to inserting to the right " << data << endl;
    root->right = buildTree(root->right);
}
void Inorder(node*root)
{
    if(root == nullptr)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data <<endl;
    Inorder(root->right);
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
    Inorder(root);
    return 0;
}
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node* createNode(int val)
{
    node* newNode = new node();
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* insertNode(node* root, int val)
{
    if(root == NULL)
    {
        return createNode(val);
    }
    else
    {
        if(val < root->data)
        {
            root->left = insertNode(root->left, val);
        }
        else
        {
            root->right = insertNode(root->right, val);
        }
    }
    return root;
}

void inorderTraversal(node* root)
{
    if(root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(node* root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(node* root)
{
    if(root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    node* root = NULL;

    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    cout << "In-order traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}

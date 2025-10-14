#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* createNode(int val) {
    node* temp = new node();
    temp->data = val;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

node* insertNode(node* root, int key) {
    if (root == nullptr)
        return createNode(key);
    if (key < root->data)
        root->left = insertNode(root->left, key);
    else if (key > root->data)
        root->right = insertNode(root->right, key);
    return root;
}

node* searchNode(node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key > root->data)
        return searchNode(root->right, key);
    else
        return searchNode(root->left, key);
}

node* minimumValue(node* root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}

node* maximumValue(node* root) {
    while (root && root->right != nullptr)
        root = root->right;
    return root;
}

node* deleteNode(node* root, int key) {
    if (root == nullptr)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = minimumValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void preorder(node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    node* root = nullptr;
    root = insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 8);
    insertNode(root, 3);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    int key = 5;
    node* found = searchNode(root, key);
    if (found)
        cout << "Node " << key << " found in BST." << endl;
    else
        cout << "Node " << key << " not found in BST." << endl;

    cout << "Minimum value in BST: " << minimumValue(root)->data << endl;
    cout << "Maximum value in BST: " << maximumValue(root)->data << endl;

    cout << "\nDeleting node 4..." << endl;
    root = deleteNode(root, 4);

    cout << "Inorder Traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}

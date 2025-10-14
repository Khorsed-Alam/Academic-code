#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

Node* insertNode(Node* root, int key) {
    if (root == nullptr)
        return createNode(key);
    if (key < root->data)
        root->left = insertNode(root->left, key);
    else if (key > root->data)
        root->right = insertNode(root->right, key);
    return root;
}

Node* searchNode(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key < root->data)
        return searchNode(root->left, key);
    else
        return searchNode(root->right, key);
}

Node* minimumValue(Node* root) {
    while (root != nullptr && root->left != nullptr)
        root = root->left;
    return root;
}

Node* maximumValue(Node* root) {
    while (root != nullptr && root->right != nullptr)
        root = root->right;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minimumValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 8);
    insertNode(root, 3);

    cout << "BST inorder traversal: ";
    inorder(root);
    cout << endl;

    int key = 5;
    Node* found = searchNode(root, key);
    if (found)
        cout << "Node " << key << " found in BST." << endl;
    else
        cout << "Node " << key << " not found." << endl;

    cout << "Minimum value in BST: " << minimumValue(root)->data << endl;
    cout << "Maximum value in BST: " << maximumValue(root)->data << endl;

    root = deleteNode(root, 3);
    root = deleteNode(root, 4);

    cout << "BST inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Updated minimum value: " << minimumValue(root)->data << endl;
    cout << "Updated maximum value: " << maximumValue(root)->data << endl;

    return 0;
}

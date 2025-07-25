#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void InorderTraversal(Node* root) {
    if (root == nullptr) return;
    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

void PreorderTraversal(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

void PostorderTraversal(Node* root) {
    if (root == nullptr) return;
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(13);
    root->right->right = new Node(18);

    root->left->left->left = new Node(1);

    cout << "Inorder Traversal: ";
    InorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    PreorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    PostorderTraversal(root);
    cout << endl;

    return 0;
}

#include <iostream>
#include <queue>
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
void levelOrderPrint(Node* root){
    if(root  == nullptr) {
        return ;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        for(int i=1;i<=s;i++){
            cout <<"" <<" ";
            Node* ele = q.front();
            cout<<ele->data<<" ";
            q.pop();
            if(ele->left != nullptr) q.push(ele->left);
            if(ele->right != nullptr) q.push(ele->right);
        }
        cout<<endl;
    }

}

int main() {
    queue<Node*> q;
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(13);
    root->right->right = new Node(18);

    root->left->left->left = new Node(1);
    levelOrderPrint(root);

    return 0;
}

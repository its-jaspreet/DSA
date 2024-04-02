#include <iostream>

using namespace std;

class Node {
public: 
    Node* left;
    int data;
    Node* right;
};

class Tree {
private:
    Node* root;
public: 
    Tree();
    Node* CreateTree();
    void PreOrder(Node* root);
    void InOrder(Node* root);
    void PostOrder(Node* root);
    int CountNodes(Node* root);
    int CountLeaf(Node* root);
    int CountNonLeaf(Node* root);
};

Tree::Tree() {
    root = NULL;
}

Node* newNode(int data) {
    Node *node = new Node();
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    
    return node;
}

Node* Tree::CreateTree() {
    Node *root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> right -> right = newNode(6);
    return root;
}

void Tree::PreOrder(Node *p) {
    if (p){
        cout << p->data << ", " << flush;
        PreOrder(p->left);
        PreOrder(p->right);
    }
}

void Tree::PostOrder(Node *p) {
    if (p == NULL) {
        return;
    } else {
        PostOrder(p -> left);
        PostOrder(p -> right);
        cout << p->data << ", " << flush;
    }
}

int Tree::CountNodes(Node *p) {
    int count = 0;
    if (p == NULL) {
        return count;
    } else {
        return 1 + CountNodes(p -> left) + CountNodes(p -> right);
    }
    cout << endl;
}

int Tree::CountLeaf(Node *p) {
    if (p == NULL) {
        return 0;
    } else if (p -> left == NULL && p -> right == NULL)  {
        return 1;
    } else {
        return CountLeaf(p -> left) + CountLeaf(p -> right);
    }
}

int Tree::CountNonLeaf(Node *p) {
    if (p && (p -> left || p -> right)) {
        return 1 + CountNonLeaf(p -> left) + CountNonLeaf(p -> right);
    } else {
        return 0;
    }
}

int main() {
    Tree bt;

    Node* root = bt.CreateTree();

    int nodeCount = bt.CountNodes(root);
    cout << "Number of Nodes: " << nodeCount << endl;

    int LeafCount = bt.CountLeaf(root);
    cout << "Number of Leaf Nodes: " << LeafCount << endl;

    int nonLeafCount = bt.CountNonLeaf(root);
    cout << "Number of Non-Leaf Nodes: " << nonLeafCount << endl;
    return 0;
}
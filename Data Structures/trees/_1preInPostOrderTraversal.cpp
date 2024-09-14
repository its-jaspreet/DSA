#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    TreeNode* left;
    int val;
    TreeNode* right;
};

class Tree {
private:
    TreeNode* root;
    TreeNode* newNode();
    
public:
    Tree();
    TreeNode* createTree();
};

TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode();
    node -> val = data;
    node -> left = node -> right = NULL;

    return node;
}

TreeNode* createTree() {
    vector<TreeNode*> nodeAddr;
    int x;
    cout << "ENTER ROOT: ";
    cin >> x; 

    TreeNode* root = newNode(x);
    nodeAddr.push_back(root);

    while (!nodeAddr.empty()) {
        TreeNode* p = nodeAddr.back();
        nodeAddr.pop_back();

        int y;
        cout << "ENTER LCHILD (OR -1 IF NO MORE): ";
        cin >> y; 
        if (y != -1) {
            p -> left = newNode(y);
            nodeAddr.push_back(p -> left);
        }

        int z;
        cout << "ENTER RCHILD (OR -1 IF NO MORE): ";
        cin >> z; 
        if (z != -1) {
            p -> right = newNode(z);
            nodeAddr.push_back(p -> right);
        }
    }

    return root;
}
#include <iostream>
using namespace std;

struct BTreeNode
{
    int data;
    BTreeNode* left;
    BTreeNode* right;
};

BTreeNode* insertNode(BTreeNode* root, int value)
{
    if (root == NULL) {
        BTreeNode* newNode = new BTreeNode;
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    }
    else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void postOrderTraversal(BTreeNode* root)
{
    if (root == NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    BTreeNode* root = nullptr;
    int value;

    while (cin >> value)
    {
        root = insertNode(root, value);
    }

    postOrderTraversal(root);
}

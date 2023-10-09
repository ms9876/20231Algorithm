#include <algorithm>
#include <string>
#include <vector>

using namespace std;
vector<int> pre, post;

struct node
{
    int index;
    struct node* left;
    struct node* right;
};


node* makeTree(vector<vector<int>>& nodeinfo, int start, int end) {
    if (start > end)
        return NULL;
    int maxHeight = nodeinfo[start][1];
    int curNodeldx = start;

    for (int i = start + 1; i <= end; i++)
    {
        if (maxHeight < nodeinfo[i][1]) {
            maxHeight = nodeinfo[i][1];
            curNodeldx = i;
        }
    }

    node* nd = new node();
    nd->index = nodeinfo[curNodeldx][2];
    nd->left = makeTree(nodeinfo, start, curNodeldx - 1);
    nd->left = makeTree(nodeinfo, curNodeldx+1, end);

    return nd;
}

void PreOrder(node* tree) {
    if (tree == NULL) return;
    pre.push_back( tree->index);
    PreOrder(tree->left);
    PreOrder(tree->right);
}

void PostOrder(node* tree) {
    if (tree == NULL) return;
    PreOrder(tree->left);
    PreOrder(tree->right);
    post.push_back(tree->index);
}


vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
    vector<vector<int>> answer;

    for (int i = 0; i < nodeinfo.size(); i++)
        nodeinfo[i].push_back(i + 1);

    sort(nodeinfo.begin(), nodeinfo.end());

    node* tree = makeTree(nodeinfo, 0, nodeinfo.size() - 1);

    PreOrder(tree);
    PostOrder(tree);



    return answer;
}
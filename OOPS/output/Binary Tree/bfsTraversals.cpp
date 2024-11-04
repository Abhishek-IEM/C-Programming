#include <iostream>
#include <limits.h>
#include <queue>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " "; // root
    preOrder(root->left);     // left
    preOrder(root->right);    // right
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);      // left
    cout << root->val << " "; // root
    inOrder(root->right);     // right
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);    // left
    postOrder(root->right);   // right
    cout << root->val << " "; // root
}

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " "; // root
        return;
    }
    nthLevel(root->left, curr + 1, level);  // left
    nthLevel(root->right, curr + 1, level); // right
}

void levelOrder(Node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevelRev(root, 1, i);
        cout << endl;
    }
}

void nthLevelRev(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " "; // root
        return;
    }
    nthLevelRev(root->right, curr + 1, level); // right
    nthLevelRev(root->left, curr + 1, level);  // left
}


void levelOrderQueue(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

int main()
{
    Node *a = new Node(1); // root
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // level Order Traversal
    levelOrderQueue(a);
}

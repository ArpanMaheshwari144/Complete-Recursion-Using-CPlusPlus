#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    // Making of a node
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Making of a node
// Node *newNode(int data)
// {
//     Node *temp = new Node();
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }

int heightOfBinaryTree(Node *root)
{
    // Base Condition
    if (root == NULL)
    {
        return 0;
    }

    // Hypothesis
    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);

    return 1 + max(leftHeight, rightHeight); // Induction
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->right->left = new Node(10);
    root->right->right->right = new Node(11);

    cout << "The height of the binary tree is: " << heightOfBinaryTree(root);
    return 0;
}
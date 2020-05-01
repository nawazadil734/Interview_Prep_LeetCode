#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * left, *right;
};

struct Node * newNode(int data) {
    struct Node * newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int findMaxUtil(Node * root, int & res) {
    if(root == NULL) {
        return 0;
    }

    // l and r store maximum path sum goinf through left and
    // right child of root respectively.
    int l = findMaxUtil(root->left, res);
    int r = findMaxUtil(root->right, res);

    // Max path for parent call of root. This path mush 
    //include at-most one child of root

    int max_single = max(max(l,r) + root->data, root->data);
    // Max Top represents the sum when the Node under
    // consideration is the root of the maxsum and no
    // ancestors of root are there in the max sum path.

    int max_top = max(max_single, l + r + root->data);

    res = max(res, max_top);
    return max_single;
}

int findMaxSum(Node * root) {
    int res = INT_MIN;
    findMaxUtil(root, res);
    return res;
}
int main() {
    struct Node * root = newNode(-10);
    root->left = newNode(9);
    root->right       = newNode(20); 
    root->right->left = newNode(15); 
    root->right->right  = newNode(7);
    cout << "Max path sum is " << findMaxSum(root) << endl;
    return 0;
}
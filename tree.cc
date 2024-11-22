#include<iostream>
using namespace std;
//recursive tree traversal used

struct tree {
    int data;
    tree* left;
    tree* right;

    tree(int val):(data(val), left(nullptr), right(nullptr)) {}
};


void insertData(int data) {

}

void preOrder(tree* node, vector<int> &result)  {
  if (node == nullptr) return;
  result.push_back(node->data);
  preOrder(node->left, result);
  preOrder(node->right, result);
}

void inOrder(tree* node, vector<int> &result) {
  if (node == nullptr) return;
  preOrder(node->left, result);
  result.push_back(node->data);
  preOrder(node->right, result);
}

void postOrder(tree* node, vector<int> &result) {
  if (node == nullptr) return;

  preOrder(node->left, result);
  preOrder(node->right, result);
  result.push_back(node->data);
}
void levelOrderTraversal(tree* node, vector<int>& result) {
    if (node == nullptr) return;
    queue<treeNode*> q;
    q.push(root);
    while (!q.empty()) {
        treeNode* node = q.front();
        q.pop();
        result.push_back(node->data);  
        if (node->left) q.push(node->left);  
        if (node->right) q.push(node->right); 
    }
}
int main() {
  vector<int> result;
  struct tree* root = new tree(1);
  root->left = new tree(2);
  root->rigth = new tree(3);
  root->left->left = new tree(4);
  root->rigth->rigth = new tree(7);
  preOrder(root, result);
  for (int i : result) {
    cout<<i<<" ";
  }
}

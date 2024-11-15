#include<iostream>
using namespace std;

struct tree {
    int data;
    tree* left;
    tree* right;

    tree(int val):(data(val), left(nullptr), right(nullptr)) {}
};

void insertData(int data) {

}

void preOrder(tree* node, vector<int> & result )  {
  if (node == nullptr) return;
  result.push_back(node->data);
  preOrder(node->left, result);
  preOrder(node->right, result);
}

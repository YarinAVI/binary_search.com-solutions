#include "solution.hpp"
using namespace std;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class Solution {
    public:
    int solve(Tree* root, int k) {
    vector<int> elements;
    inorder(root,elements);
    return elements[k];
    }
    private:
    void inorder(Tree *root,vector<int> &elements) {
        if(root->left) inorder(root->left,elements);
        elements.push_back(root->val);
        if(root->right)inorder(root->right,elements);
    }
};
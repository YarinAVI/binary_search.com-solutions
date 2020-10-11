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
        int res;
        dfs(root,&res,k);
        return res;
    }
    private:
    void dfs(Tree* root,int *res,int k) {
        if(root->left && root->right) {
            if(root->left->val == k) {
                (*res) = root->right->val;
                return;
            }
            else if(root->right->val ==k) {
                (*res) = root->left->val;
                return;
            }
            dfs(root->left,res,k);
            dfs(root->right,res,k);
        }
    }
};
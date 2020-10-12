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
    Tree* solve(Tree* root) {
        if(!root) return NULL;
        if(dfs(root,0)) root = NULL;
    
        return root;
    }
    private:
    bool dfs(Tree* root,int rm_val) {
        if(root->left)  {
            if(dfs(root->left,rm_val)) {
                free(root->left);
                root->left = NULL;
            }
        }
        if(root->right) {
         if(dfs(root->right,rm_val)) {
            free(root->right);
            root->right = NULL;
         }
        }
        
        if(!root->right && !root->left && root->val == rm_val) return true;
        return false;
    }
};
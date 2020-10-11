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
    int solve(Tree* root) {
        if(!root) return 0;
        int res =0;
        dfs(root,&res,false);
        return res;
    }
    private:
    void dfs(Tree*root,int * res,bool flag) {
        
        if(root->right) dfs(root->right,res,true);
        if(root->left) dfs(root->left,res,false);
        if(!root->left && !root->right) {
            if(flag) (*res) += root->val;
        }
    }
};
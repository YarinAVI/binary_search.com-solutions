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
    bool solve(Tree* root) {
        if(!root) return true;
       int value = root->val;
       bool res = true;
       dfs(root,value,&res);
       return res;
    }
    private:
    void dfs(Tree* root,int val,bool *res) {
        if(root->val !=val) {
            (*res) = false;
            return;
        }
        if(root->left) dfs(root->left,val,res);
        if(root->right) dfs(root->right,val,res);
    }
};
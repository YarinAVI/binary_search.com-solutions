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
        int result = 0;
        dfs(root,0,&result);
        return result;
    }
    private:
    void dfs(Tree *root,int curr_num,int *res) {
        curr_num*=10;
        curr_num+=root->val;
        if(root->left) dfs(root->left,curr_num,res);
        if(root->right)dfs(root->right,curr_num,res);
        
        if(!root->left && !root->right) (*res)+= curr_num;
    }
};
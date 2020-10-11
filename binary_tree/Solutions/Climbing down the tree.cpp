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
        int result = INT_MIN;
        dfs(root,0,&result);
        return result;
    }
    void dfs(Tree * root,int curr_num,int * res) {
        curr_num+=root->val;
        if(root->left) dfs(root->left,curr_num,res);
        if(root->right) dfs(root->right,curr_num,res);
        
        if(!root->left && !root->right) {
            if(curr_num > (*res) ) (*res) = curr_num;
        }
    }
};
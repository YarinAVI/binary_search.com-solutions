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
    int solve(Tree* root, int t) {
        int res;
        bool flag = false;
        inorder_successor(root,t,res,flag);
        return res;
    }
    private:
    void inorder_successor(Tree* root,int target,int &res,bool &flag) {
        if(root->left) inorder_successor(root->left,target,res,flag);
        if(flag) {
            res = root->val;
            flag = false;
            return;
        }
        else if(root->val == target && root->right) {
            flag = true;
            inorder_successor(root->right,target,res,flag);
        }
        else if(root->right) inorder_successor(root->right,target,res,flag);
        else if(root->val == target)flag = true;
    }
};
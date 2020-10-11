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
    bool solve(Tree* root0, Tree* root1) {
        if(!root0 && !root1) return true;
        else if(!root0 && root1) return false;
        else if(!root1 && root0) return false;
        else if(root1->val != root0->val) return false;
        else return solve(root0->left,root1->left) && solve(root0->right,root1->right);
    }
};
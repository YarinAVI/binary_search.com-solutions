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
    Tree* solve(Tree* node0, Tree* node1) {
        if(!node0 && !node1) return NULL;
        else if(!node0) return node1;
        else if(!node1) return node0;
        dfs(node0,node1);
        return node0;
    }
    private:
    void dfs(Tree *A,Tree *B) {
        A->val += B->val;
        if(A->left && B->left) dfs(A->left,B->left);
        else if(!A->left) A->left = B->left;
        
        if(A->right && B->right) dfs(A->right,B->right);
        else if(!A->right) A->right = B->right;
        
    }
};
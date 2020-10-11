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
    vector<int> solve(Tree* root) {
        queue<Tree*> q;
        vector<int> res;
        if(!root) return res;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            while(size) {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                res.push_back(q.front()->val);
                q.pop();
                size--;
            }
        }
        return res;
    }
};
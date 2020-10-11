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
    bool solve(Tree* source, Tree* target) {
        if(!source && ! target) return true;
        else if(!source && target) return false;
        else if(!target && source) return false;
        bool res = false;
        pre_order(source,target,&res);
        return res;
    }
    private:
    void pre_order( Tree* source,Tree *target, bool * res){
        if(source->val == target->val) {
            if(check(source,target)) {
                (*res) = true;
                return;
            }
        }
        if(target->left) pre_order(source,target->left,res);
        if(target->right) pre_order(source,target->right,res);
        
    }
    bool check(Tree* A, Tree* B) {
        if(!A && ! B) return true;
        else if(A && !B) return false;
        else if(!A && B) return false;
        else if(A->val != B->val) return false;
        
        else return check(A->left,B->right) && check(A->right,B->left) || check(A->left,B->left) && check(A->right,B->right);
    }
};
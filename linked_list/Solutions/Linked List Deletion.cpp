#include "solution.hpp"
using namespace std;
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
class Solution {
    public:
    LLNode* solve(LLNode* node, int target) {
        LLNode * rm  = node;
        if(!node) return NULL;
        while(node->val == target) {
                node = node->next;
                free(rm);
                rm = node;
                if(!node) return NULL;
        }
        while(rm->next) {
            if(rm->next->val == target) {
                LLNode *rm2 = rm->next;
                rm->next = rm->next->next;
                free(rm2);
            }
            else rm = rm->next;
        }
        return node;
    }
    
};
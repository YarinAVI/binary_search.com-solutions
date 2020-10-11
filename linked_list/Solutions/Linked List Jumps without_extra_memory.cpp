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
    LLNode* solve(LLNode* node) {
        LLNode* result = node;
        LLNode* temp = result;
        while(node) {
            int r = node->val;
            while(r) {
                node = node->next;
                r--;
                if(!node) break;
            }
            if(node) {
                temp->next = node;
                temp = temp->next;
            }
            else temp->next = NULL;
        }
        return result;
    }
};
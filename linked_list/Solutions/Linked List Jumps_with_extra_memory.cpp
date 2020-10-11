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
        LLNode* result = (LLNode*)calloc(1, sizeof(LLNode));
        result->val = node->val;
        LLNode* temp = result;
        while (node) {
            int r = node->val;
            while (r) {
                node = node->next;
                r--;
                if (!node) break;
            }
            if (node) {
                temp->next = (LLNode*)calloc(1, sizeof(LLNode));
                temp->next->val = node->val;
                temp = temp->next;
            }
        }
        return result;
    }
};
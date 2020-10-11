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
    bool solve(LLNode* head) {
        while(head->next) {
            if(head->val >= head->next->val) return false;
            head = head->next;
        }
        return true;
    }
};
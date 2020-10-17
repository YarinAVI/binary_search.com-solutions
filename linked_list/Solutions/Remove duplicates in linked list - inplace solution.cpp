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
        if(!node) return NULL;
        unordered_set<int> m;
        m.insert(node->val);
        LLNode *it = node;
        while(it->next) {
            if(m.find(it->next->val) == m.end()) m.insert(it->next->val) , it = it->next;
            else {
                LLNode *rm = it->next;
                it->next = it->next->next;
                free(rm);
            }
        }
        return node;
    }
};
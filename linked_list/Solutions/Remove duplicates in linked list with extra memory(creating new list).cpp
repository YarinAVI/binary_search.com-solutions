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
        LLNode *it = node;
        LLNode *new_head = (LLNode*)calloc(1,sizeof(LLNode));
        new_head->val = node->val;
        m.insert(node->val);
        LLNode *it2 = new_head;
        while(it) {
            if(m.find(it->val) == m.end()) {
                m.insert(it->val);
                it2->next = (LLNode*)calloc(1,sizeof(LLNode));
                it2->next->val = it->val;
                it2 = it2->next;
            }
            it = it->next;
        }
        return new_head;
        
    }
};
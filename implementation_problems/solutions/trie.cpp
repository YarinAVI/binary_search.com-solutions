#include "solution.hpp"
using namespace std;

class Trie {
    public:
    struct trie_node {
      trie_node *sub_chars[26];
      bool EOW; // end of word.
    };
    struct trie_node * head = NULL;
    Trie() {
        head = (struct trie_node*)calloc(1,sizeof(struct trie_node));
    }

    void add(string s) {
        struct trie_node * temp = head;
        int i = 0;
        while(i<s.size()) {
        if(!temp->sub_chars[s[i]-'a']) {
            temp->sub_chars[s[i]-'a'] = (struct trie_node *)calloc(1,sizeof(struct trie_node));
        }
        temp = temp->sub_chars[s[i]-'a'];
        i++;
        }
        temp->EOW = true;
    }

    bool exists(string word) {
        struct trie_node * temp = head;
        int i = 0;
        while(i<word.size()) {
            if(!temp->sub_chars[word[i]-'a']) return false;
            temp = temp->sub_chars[word[i]-'a'];
            i++;
        }
        if(temp->EOW) return true;
        return false;
    }

    bool startswith(string p) {
               struct trie_node * temp = head;
               int i = 0;
        while(i<p.size()) {
            if(!temp->sub_chars[p[i]-'a']) return false;
            temp = temp->sub_chars[p[i]-'a'];
            i++;
        }
        return true;
    }
    
};
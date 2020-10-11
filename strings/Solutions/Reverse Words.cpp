#include "solution.hpp"
using namespace std;

class Solution {
    public:
    string solve(string sentence) {
        if(sentence.empty()) return ""; 
        int i=0;
        int j=0;
        stack<string> s;
        while(sentence[i] ==' ' && i<sentence.size()) i++;
        j=i;
        while(i<sentence.size()) {
            while(sentence[j]!= ' ' && j<sentence.size()) j++;
            s.push(sentence.substr(i,j-i));
            i=j+1,j++;
        }
        string result;
        while(!s.empty()) {
            result += s.top();
            result +=' ';
            s.pop();
        }
        result.pop_back();
        return result;
    }
};
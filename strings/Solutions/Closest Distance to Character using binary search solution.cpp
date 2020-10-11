#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(string s, string c) {
        // we assume C always exists in S.
        vector<int> res(s.size(),0);
        vector<int> occ;
        for(int i=0;i<s.size();i++) {
            if(s[i] == c[0]) occ.push_back(i);
        }
        if(occ.size() == s.size()) return res;
        
        for(int i=0;i<s.size();i++) {
            if(s[i] == c[0]) continue;
            if(i<occ[0]) res[i] = occ[0] - i;
            else if(i>occ[occ.size()-1]) res[i] = i - occ[occ.size()-1];
            
            else {
                int right = occ.size()-1;
                int left =0;
                while(right >= left) {
                    int mid =  left + (right-left) /2;
                    if(occ[mid] < i) left = mid+1;
                    else right = mid-1;
                }
                res[i] = std::min(abs(occ[left]-i),abs(occ[right]-i));
                
            }
        }
        return res;
    }
};
#include "solution.hpp"
using namespace std;

class TwoSum {
    public:
    TwoSum() {

    }
    void add(int val) {
        my_set.insert(val);
    }

    bool find(int val) {
        //if(my_set.size()==1) return false;
        
        for(auto it = my_set.begin(); it!=my_set.end();it++) {
            pair<int,const int*> my_pair;
            my_pair.first  = val - (*it);
            my_pair.second = (&(*it));
            
            std::pair<std::unordered_multiset<int>::iterator,std::unordered_multiset<int>::iterator> ret = my_set.equal_range(my_pair.first);
            if(ret.first == my_set.end()  ) continue;
            else {
                for(auto my_it = ret.first; my_it != ret.second; my_it++) {
                    if((&(*my_it)) != my_pair.second) return true;
                }
            }
        }
        return false;
    }
    private:
    unordered_multiset<int> my_set;
};
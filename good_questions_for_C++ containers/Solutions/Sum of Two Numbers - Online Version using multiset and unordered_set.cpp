#include "solution.hpp"
using namespace std;

class TwoSum {
    public:
    TwoSum() {

    }
    void add(int val) {
        my_ordered_set.insert(val);
       // cout << my_ordered_set.size() << endl;
    }

    bool find(int val) {
        if(my_set.find(val)!=my_set.end()) return true;
        if(my_ordered_set.size() == 1) return false;
        auto it = my_ordered_set.begin(); // iterator.
        auto rit = my_ordered_set.rbegin(); // reverse iterator.
       // cout << my_ordered_set.size() << endl;
       
        while(it!=my_ordered_set.end()) {
        //    cout << *it << &(*it) << " " <<*rit << &(*rit)<< endl;
            if( (&(*it)) == (&(*rit))) break;
            if((*it) + (*rit) ==val) {
                my_set.insert(val);
                return true;
                
            }
            else if((*it) + (*rit) > val) rit++;
            else if((*it) + (*rit) < val) it++;
        }
        return false;
    }
    private:
    unordered_set<int> my_set;
    multiset<int> my_ordered_set;
};  
#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<vector<int>> solve(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++) {
            int l=0, r = matrix[i].size()-1;
            int temp;
            while(l<r) {
                matrix[i][l] = !matrix[i][l];
                matrix[i][r] = !matrix[i][r];
                temp = matrix[i][r];
                matrix[i][r] = matrix[i][l];
                matrix[i][l] = temp;
                l++,r--;
            }
            if(l==r) matrix[i][l] = !matrix[i][l];
        }
        return matrix;
    }
};
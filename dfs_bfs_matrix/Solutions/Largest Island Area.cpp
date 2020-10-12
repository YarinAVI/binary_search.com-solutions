#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<vector<int>>& matrix) {
        int max = 0;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]) {
                    int res = dfs(matrix,i,j);
                    if(res > max) max = res;
                }
            }
        }
        return max;
    }
    private:
    int dfs(vector<vector<int>> & matrix,int i,int j) {
        if(i>=matrix.size() || j>=matrix[i].size() || matrix[i][j] == 0) return 0;
        int c=1;
        matrix[i][j] = 0;
        if(i<matrix.size())     c+=dfs(matrix,i+1,j);
        if(i>0)                 c+=dfs(matrix,i-1,j);
        if(j<matrix[i].size())  c+=dfs(matrix,i,j+1);
        if(j>0)                 c+=dfs(matrix,i,j-1);
        return c;
    }
};
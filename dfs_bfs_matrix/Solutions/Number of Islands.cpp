#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<vector<int>>& matrix) {
        int result = 0;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]) {
                    result++;
                    dfs(matrix,i,j);
                }
            }
        }
        return result;
    }
    private:
    void dfs(vector<vector<int>> &matrix,int row,int column) {
        if(row<0 || column <0 || row==matrix.size() || column == matrix[row].size() || !matrix[row][column]) return;
        matrix[row][column] = 0;
        dfs(matrix,row+1,column);
        dfs(matrix,row-1,column);
        dfs(matrix,row,column+1);
        dfs(matrix,row,column-1);
    }
};
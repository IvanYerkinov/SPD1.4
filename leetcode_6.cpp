/*Write an efficient algorithm that searches for a value in an m x n matrix.
This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

       int  ysize = matrix.size() - 1;
        for(int y = 0; y < ysize; y++)
        {
            if (matrix[y][0] <= target && matrix[y + 1][0] > target)
            {
                int xsize = matrix[y].size();
                for(int x = 0; x < xsize; x++)
                {
                    if(matrix[y][x] == target)
                    {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};


int main(void)
{
    vector<vector<int>> matrix;
    int input = 0;
    for(int y = 0; y < 6; y++)
    {
        vector<int> row;
        for(int x = 0; x < 6; x ++)
        {
            input+=1;
            row.push_back(input);
        }
        matrix.push_back(row);
    }

    Solution sol;

    cout << sol.searchMatrix(matrix, 23);

}

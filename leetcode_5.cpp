#include <iostream>
#include <vector>

using namespace std;

//Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int siz = heights.size() - 2;
        int resultReturn = 0;

        for(int i = 0; i < siz; i++)
        {
            //check heights[i] and heights[i+1]
            int min;
            if(heights[i] <= heights[i+1])
            {
                min = heights[i];
            }
            else
            {
                min = heights[i+1];
            }
            //Find the smaller and * 2
            min = min * 2;
            if (min > resultReturn)
            {
                resultReturn = min;
            }
            //Return the highest result

        }

        return resultReturn;

    }
};

int main()
{
    vector<int> input1 = {2, 1, 5, 6, 4, 3};
    Solution sol;

    cout << sol.largestRectangleArea(input1) << "\n";

}

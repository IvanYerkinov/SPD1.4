#include <iostream>
#include <vector>

/* Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index. */

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int jumppos = 0;
        int vecsize = nums.size() - 1;

        while(true)
        {
            if(jumppos > vecsize)
            {
                return false;
            }
            else if(nums[jumppos] == 0)
            {
                return false;
            }
            else if(jumppos == vecsize)
            {
                return true;
            }

            jumppos += nums[jumppos];
        }

    }
};

int main()
{
    vector<int> input1 = {2, 3, 1, 1, 4};
    vector<int> input2 = {3, 2, 1, 0, 4};
    Solution sol;

    cout << sol.canJump(input1) << "\n";
    cout << sol.canJump(input2);

}

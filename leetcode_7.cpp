#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.

What is the minimum candies you must give?
*/
//Hard problem

class Solution {
public:
    int candy(vector<int>& ratings) {

        int vecsize = ratings.size() - 1;
        int lastcandy = 1;
        int mostcandy = 0;
        int retvalue = 0;



        for(int i = 0; i < vecsize; i++)
        {

            retvalue += lastcandy;

            if(ratings[i] > ratings[i+1])
            {
                lastcandy -= 1;
                if (lastcandy < 1)
                {
                    retvalue += (i + 1) - mostcandy;
                    lastcandy = 1;
                }
                lastcandy = 1;
            }
            else if(ratings[i] < ratings[i+1])
            {
                mostcandy = i+1;
                lastcandy += 1;

            }
            else
            {
                mostcandy = i+1;
                lastcandy = 1;
            }

        }
        retvalue += lastcandy;
        return retvalue;

    }
};

int main()
{
  Solution sol;
  vector<int> input = {1, 2, 2};
  vector<int> inpu2 = {1, 0, 2};
  cout << sol.candy(input);
}

#include <iostream>
#include <string>

using namespace std;

// Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

class Solution {
public:
    string multiply(string num1, string num2) {

        int n1 = 0;
        int n2 = 0;
        string ret = "";

        int siz = num1.size();
        for(int i = 0; i < siz; i++)
        {
            n1 *= 10;
            n1 += ((int)num1[i] - '0');
        }

        siz = num2.size();
        for(int i = 0; i < siz; i++)
        {
            n2 *= 10;
            n2 += ((int)num2[i] - '0');
        }

        n1 = n1 * n2;

        while(n1 >= 1)
        {
            char a = n1 % 10 + '0';
            ret.insert(0, 1, a);
            n1 /= 10;
        }

        return ret;
    }
};

int main()
{
    Solution sol;

    std::cout << sol.multiply("12", "456");


    return 0;
}

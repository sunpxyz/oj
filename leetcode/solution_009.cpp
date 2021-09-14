// Question 009: Palindrome Number
//
// 2019/03/08

#include <sstream>
#include <algorithm>


class Solution {
public:
    bool isPalindrome(int x) {
        std::stringstream ss;
        ss << x;

        std::string str = ss.str();
        std::reverse(str.begin(), str.end());

        return str == ss.str();
    }
};

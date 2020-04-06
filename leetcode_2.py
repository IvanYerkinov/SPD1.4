# Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
# Hard problem


class Solution:
    def longestValidParentheses(self, s: str) -> int:
        highestnum = 0
        r = len(s) - 2
        num = 0
        i = 0
        while i < r:
            if s[i] == '(' and s[i+1] == ')':
                num += 1
                i += 2
            else:
                if num > highestnum:
                    highestnum = num
                num = 0
                i += 1
        return highestnum


if __name__ == "__main__":
    sol = Solution()
    stri = "((())()()(()((()()()((()))()()((()))()"
    print(sol.longestValidParentheses(stri))

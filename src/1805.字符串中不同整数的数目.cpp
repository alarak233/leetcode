/*
 * @lc app=leetcode.cn id=1805 lang=cpp
 *
 * [1805] 字符串中不同整数的数目
 */

// @lc code=start
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> s;
        int n = word.size(), p1 = 0, p2;
        while (true) {
            while (p1 < n && !isdigit(word[p1])) {
                p1++;
            }
            if (p1 == n) {
                break;
            }
            p2 = p1;
            while (p2 < n && isdigit(word[p2])) {
                p2++;
            }
            while (p2 - p1 > 1 && word[p1] == '0') { // 去除前导 0
                p1++;
            }
            s.insert(word.substr(p1, p2 - p1));
            p1 = p2;
        }
        return s.size();
    }
};
// @lc code=end


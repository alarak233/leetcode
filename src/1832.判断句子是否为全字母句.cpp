/*
 * @lc app=leetcode.cn id=1832 lang=cpp
 *
 * [1832] 判断句子是否为全字母句
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)return false;
        bool a[26]={0};
        for(auto c:sentence){
            a[c-'a']=true;
        }
        for(auto i:a){
            if(!i)return false;
        }
        return true;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=1700 lang=cpp
 *
 * [1700] 无法吃午餐的学生数量
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int st0=0,st1=0,sa=0;
        for(auto s:students){
            if(s==0)st0++;
        }
        int len=students.size();
        st1=len-st0;
        for(auto s:sandwiches){
            if(s==0){
                if(st0>0){
                    st0--;
                }
                else{
                    return st1;
                }
            }
            else{
                if(st1>0){
                    st1--;
                }
                else{
                    return st0;
                }
            }
        }
        return 0;
    }
};
// @lc code=end


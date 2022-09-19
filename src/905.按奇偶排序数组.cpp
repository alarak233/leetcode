/*
 * @lc app=leetcode.cn id=905 lang=cpp
 *
 * [905] 按奇偶排序数组
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int temp=0;
        while(i<j){
            while(i<nums.size()&&nums[i]%2==0)i++;
            while(j>-1&&nums[j]%2==1)j--;
            if(i<j){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;    
            }
            i++;
            j--;
        }
        return nums;
    }
};
// @lc code=end


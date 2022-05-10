/*
 * @lc app=leetcode.cn id=1855 lang=cpp
 *
 * [1855] 下标对中的最大距离
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int ans = 0;
        for (int j = 0; j < n2; ++j){
            while (i < n1 && nums1[i] > nums2[j]){
                ++i;
            }
            if (i < n1){
                ans = max(ans, j - i);
            }
        }
        return ans;
    }
};
// @lc code=end


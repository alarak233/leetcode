/*
 * @lc app=leetcode.cn id=436 lang=cpp
 *
 * [436] 寻找右区间
 */

// @lc code=start
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        unordered_map<int, int> starts_map;
        vector<int> starts;
        for (int i = 0; i < intervals.size(); ++i) {
            starts_map[intervals[i][0]] = i;
            starts.push_back(intervals[i][0]);
        }
        sort(starts.begin(), starts.end());
        vector<int> res;
        for (auto& interval : intervals) {
            int idx = higher_find(starts, interval[1]);
            res.push_back(idx == -1 ? -1 : starts_map[starts[idx]]);
        }
        return res;
    }
    
    int higher_find(vector<int>& starts, int target) {
        if (target > starts[starts.size() - 1])
            return -1;
        int left = 0;
        int right = starts.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (starts[mid] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
// @lc code=end


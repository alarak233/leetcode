/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
//单调栈
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            int num=nums2[i];
            while(!st.empty()&&st.top()<num){
                st.pop();
            }
            m[num]=st.empty()?-1:st.top();
            st.push(num);
        }
        for(auto i:nums1){
            ans.push_back(m[i]);
        }
        return ans;
    }
};
// @lc code=end


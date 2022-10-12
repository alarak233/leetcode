/*
 * @lc app=leetcode.cn id=817 lang=cpp
 *
 * [817] 链表组件
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        int ans=0;
        unordered_set<int> s;
        for(auto num:nums){
            s.emplace(num);
        }
        while(head){
            if(s.count(head->val)!=0){
                ans++;
                while (head && s.count(head->val)!=0){
                    head=head->next;
                }                
            }
            else{
                head=head->next;
            }
        }
        return ans;
    }
};
// @lc code=end


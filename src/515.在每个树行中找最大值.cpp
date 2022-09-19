/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 在每个树行中找最大值
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)return ans;
        queue<TreeNode*> q;
        q.push(root);
        int maxVal=root->val;
        while(!q.empty()){
            maxVal=q.front()->val;
            int len=q.size();
            for(int i=0;i<len;i++){
                if(q.front()->left!=nullptr)q.push(q.front()->left);
                if(q.front()->right!=nullptr)q.push(q.front()->right);
                maxVal=max(maxVal,q.front()->val);
                q.pop();
            }
            ans.push_back(maxVal);
        }
        return ans;
    }
};
// @lc code=end


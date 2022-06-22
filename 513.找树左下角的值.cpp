/*
 * @lc app=leetcode.cn id=513 lang=cpp
 *
 * [513] 找树左下角的值
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
#include<queue>
using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans=root->val;
        while(!q.empty()){
            ans=q.front()->val;
            int len=q.size();
            for(int i=0;i<len;i++){
                if(q.front()->left!=nullptr)q.push(q.front()->left);
                if(q.front()->right!=nullptr)q.push(q.front()->right);
                q.pop();
            }
        }
        return ans;
    }
};
// @lc code=end


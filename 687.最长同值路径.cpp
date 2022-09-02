/*
 * @lc app=leetcode.cn id=687 lang=cpp
 *
 * [687] 最长同值路径
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
#include<algorithm>
using namespace std;

class Solution {
private:
    int res;
public:
    int longestUnivaluePath(TreeNode* root) {
        res=0;
        dfs(root);
        return res;
    }

    int dfs(TreeNode* root){
        if(root==nullptr)return 0;
        int maxLeft=dfs(root->left),maxRight=dfs(root->right);
        if(root->left!=nullptr){
            if(root->left->val==root->val){
                maxLeft=maxLeft+1;
            }
            else{
                maxLeft=0;
            }
        }
        if(root->right!=nullptr){
            if(root->right->val==root->val){
                maxRight=maxRight+1;
            }
            else{
                maxRight=0;
            }
        }
        res=max(res,maxLeft+maxRight);
        return max(maxLeft,maxRight);
    }
};
// @lc code=end


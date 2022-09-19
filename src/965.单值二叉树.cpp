/*
 * @lc app=leetcode.cn id=965 lang=cpp
 *
 * [965] 单值二叉树
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
class Solution {
private:
    int a=0;
public:
    bool help(TreeNode* root,int& Rval){
        if(root->val!=Rval)return false;
        if(root->left==nullptr){
            if(root->right==nullptr)
                return true;
            else
                return help(root->right,Rval);
        }
        else{
            if(root->right==nullptr)
                return help(root->left,Rval);
            else
                return help(root->left,Rval)&&help(root->right,Rval);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        a=root->val;
        return help(root,a);
    }
};
// @lc code=end


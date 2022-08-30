/*
 * @lc app=leetcode.cn id=998 lang=cpp
 *
 * [998] 最大二叉树 II
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
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(root->val<val){
            TreeNode* newTreeNode=new TreeNode(val);
            newTreeNode->left=root;
            return newTreeNode;
        }
        TreeNode* cur=root->right;
        TreeNode* pre=root;
        while(cur!=nullptr){
            if(cur->val<val)break;
            cur=cur->right;
            pre=pre->right;
        }
        TreeNode* newTreeNode=new TreeNode(val);
        newTreeNode->left=cur;
        pre->right=newTreeNode;
        return root;
    }
};
// @lc code=end


// @before-stub-for-debug-begin
//#include <vector>
//#include <string>
#include "commoncppproblem652.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=652 lang=cpp
 *
 * [652] 寻找重复的子树
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
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

class Solution {
private:
    unordered_map<string,TreeNode*> m;
    unordered_set<TreeNode*> s;
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return {s.begin(),s.end()};
    }

    string dfs(TreeNode* node){
        if(node==nullptr)return "";
        string left=dfs(node->left);
        string right=dfs(node->right);
        string ans=to_string(node->val)+"("+left+")("+right+")";
        if(m.count(ans)!=0){
            s.emplace(m[ans]);
        }
        else{            
            m[ans]=node;
        }
        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=449 lang=cpp
 *
 * [449] 序列化和反序列化二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*
二叉搜索树前序遍历即可唯一确定
*/

#include<string>
#include<stack>
#include<vector>
using namespace std;
class Codec {
private:
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        stack<TreeNode*> st;
        while(root||!st.empty()){
            while(root){
                s+=to_string(root->val)+' ';
                //维护前序遍历数组
                st.push(root->right);
                root=root->left;    
            }
            root=st.top();
            st.pop();            
        }

        return s;
    }

    vector<int> stv(string s){
        int i=0;
        vector<int> ans;
        while(i<s.size()){
            int j=i;
            while(s[i]!=' ')i++;
            ans.push_back(stoi(s.substr(j,i-j)));
            i++;
        }
        return ans;
    }

    TreeNode* deserialize(vector<int>& help,int i,int j) {
        if(i>j)return nullptr;
        TreeNode* T=new TreeNode(help[i]);
        if(i==j){
            return T;
        }
        int k=i+1;
        while(k<=j&&help[i]>=help[k])k++;
        T->left=deserialize(help,i+1,k-1);
        T->right=deserialize(help,k,j);
        return T;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string& data) {
        vector<int> help=stv(data);
        //TreeNode* T=new TreeNode(help.size());
        //return T;
        return deserialize(help,0,help.size()-1);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
// @lc code=end


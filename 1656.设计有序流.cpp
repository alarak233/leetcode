/*
 * @lc app=leetcode.cn id=1656 lang=cpp
 *
 * [1656] 设计有序流
 */

// @lc code=start
#include<vector>
#include<string>
using namespace std;

class OrderedStream {
private:
    vector<string> v;
    int ptr;
public:
    OrderedStream(int n) {
        v=vector<string>(n);
        ptr=1;
    }
    
    vector<string> insert(int idKey, string value) {
        v[idKey-1]=value;
        if(idKey!=ptr)return {};
        vector<string> ans;
        while(ptr<=v.size()&&v[ptr-1]!=""){
            ans.push_back(v[ptr-1]);
            ptr++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
// @lc code=end


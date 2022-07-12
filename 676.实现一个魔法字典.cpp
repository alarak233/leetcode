/*
 * @lc app=leetcode.cn id=676 lang=cpp
 *
 * [676] 实现一个魔法字典
 */

// @lc code=start
#include<vector>
#include<string>
using namespace std;

class MagicDictionary {
public:
    MagicDictionary() {

    }
    
    void buildDict(vector<string> dictionary) {
        words=dictionary;
    }
    
    bool search(string searchWord) {
        for (auto word:words)
        {
            if(word.size()!=searchWord.size())continue;
            int diff=0;
            for(int i=0;i<word.size();i++){
                if(word[i]!=searchWord[i]){
                    diff++;
                }
                if(diff>1)break;
            }
            if(diff==1)return true;
        }
        return false;        
    }

private:
    vector<string> words;
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
// @lc code=end


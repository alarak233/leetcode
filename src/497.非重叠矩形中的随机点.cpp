/*
 * @lc app=leetcode.cn id=497 lang=cpp
 *
 * [497] 非重叠矩形中的随机点
 */

// @lc code=start
#include<vector>
#include<random>
#include<algorithm>
using namespace std;

class Solution {
private:
    vector<vector<int>> rects;
    vector<int> rectsPtNum;
    random_device rd;
    mt19937 gen{rd()};

public:
    Solution(vector<vector<int>>& rects) {
        this->rects=rects;
        this->rectsPtNum.push_back(0);
        for(auto i:rects){
            this->rectsPtNum.push_back(this->rectsPtNum.back()+(i[3]-i[1]+1)*(i[2]-i[0]+1));
        }
    }
    
    vector<int> pick() {
        uniform_int_distribution dis(0,rectsPtNum.back()-1);
        int k=dis(gen);
        int rectPos=upper_bound(rectsPtNum.begin(),rectsPtNum.end(),k)-rectsPtNum.begin()-1;
        k=k-rectsPtNum[rectPos];
        int a = rects[rectPos][0], b = rects[rectPos][1];
        int y = rects[rectPos][3];
        int col = y - b + 1;
        int da = k / col;
        int db = k - col * da;
        return {a + da, b + db};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */
// @lc code=end


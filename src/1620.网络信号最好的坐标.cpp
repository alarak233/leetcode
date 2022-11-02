/*
 * @lc app=leetcode.cn id=1620 lang=cpp
 *
 * [1620] 网络信号最好的坐标
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius) {
        int min_x,min_y,max_x,max_y;
        min_x=towers[0][0];
        min_y=towers[0][1];
        max_x=towers[0][0];
        max_y=towers[0][1];
        for(auto &tower:towers){
            min_x=min(min_x,tower[0]);
            min_y=min(min_y,tower[1]);
            max_x=max(max_x,tower[0]);
            max_y=max(max_y,tower[1]);
        }

        int max_signal=0;
        int signal=0;
        vector<int> ans={0,0};
        for(int i=min_x;i<=max_x;i++){
            for(int j=min_y;j<=max_y;j++){
                signal=0;
                for(auto &tower:towers){
                    int r2=pow(tower[0]-i,2)+pow(tower[1]-j,2);
                    if(r2<=pow(radius,2))
                        signal+=floor((double)tower[2]/(double)(1+sqrt(r2)));
                }
                if(signal>max_signal){
                    ans={i,j};
                    max_signal=signal;
                }
            }
        }
        return ans;
    }
};
// @lc code=end


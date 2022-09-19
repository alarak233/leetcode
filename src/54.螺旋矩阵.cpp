/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> cricle(vector<vector<int>>& matrix,int c1,int c2,int r1,int r2) {
        //cout<<c1<<" "<<c2<<" "<<r1<<" "<<r2<<endl ;
        vector<int> ret ;
        if(c1>=c2||r1>=r2)return ret ;
        for(int i=r1;i<r2;i++){
            ret.push_back(matrix[c1][i]) ;
        }
        
        for(int i=c1+1;i<c2;i++){
            ret.push_back(matrix[i][r2-1]) ;
        }
        if(c2-1!=c1)
        for(int i=r2-1-1;i>=r1;i--){
            ret.push_back(matrix[c2-1][i]) ;
        }
        if(r2-1!=r1)
        for(int i=c2-1-1;i>=c1+1;i--){
            ret.push_back(matrix[i][r1]) ;
        }
        
        
        vector<int> temp = cricle(matrix,c1+1,c2-1,r1+1,r2-1) ;
        
        ret.insert(ret.end(),temp.begin(),temp.end()) ;
        return ret ;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        
        vector<int> ret ;
        if(n==0)return ret ;
        int m = matrix[0].size() ;
        ret = cricle(matrix,0,n,0,m) ;
        return ret ;
    }   
};
// @lc code=end


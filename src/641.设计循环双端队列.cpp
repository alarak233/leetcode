/*
 * @lc app=leetcode.cn id=641 lang=cpp
 *
 * [641] 设计循环双端队列
 */

// @lc code=start
#include<vector>
using namespace std;

class MyCircularDeque {
private:
    vector<int> v;
    int cap,front,back;
public:
    MyCircularDeque(int k) {
        v=vector<int>(k+1);
        cap=k+1;
        front=0;
        back=0;
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        front=(front-1+cap)%cap;
        v[front]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
        v[back]=value;
        back=(back+1)%cap;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())return false;
        front=(front+1)%cap;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        back=(back-1+cap)%cap;
        return true;
    }
    
    int getFront() {
        if(isEmpty())return -1;
        return(v[front]);
    }
    
    int getRear() {        
        if(isEmpty())return -1;
        return(v[(back-1+cap)%cap]);
    }
    
    bool isEmpty() {
        return front==back;
    }
    
    bool isFull() {
        return (back+1)%cap==front;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
// @lc code=end


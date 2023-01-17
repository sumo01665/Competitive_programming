/*
 * @lc app=leetcode id=622 lang=cpp
 *
 * [622] Design Circular Queue
 */

// @lc code=start
class MyCircularQueue {
private:
    vector <int> queue;
    int ptr_head;
    int ptr_tail;
    int size;
public:
    MyCircularQueue(int k) {
        queue.reserve(k);
        ptr_head = -1;
        ptr_tail = -1;
        size = k;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) ptr_head = 0;
        ptr_tail = (ptr_tail + 1)% size;
        queue[ptr_tail] = value;
        return true
    bool deQueue() {
        if (isEmpty()) return false;
        if (ptr_head = ptr_tail){
            ptr_head = -1;
            ptr_tail = -1;
            return true;
        }
        ptr_head = (ptr_head + 1)%size;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : queue[ptr_head];
    }

    int Rear() {
        return isEmpty() ? - 1 : queue[ptr_tail];
    }

    bool isEmpty() {
        return (ptr_head == -1);
    }

    bool isFull() {
        return (ptr_tail + 1)% size == ptr_head;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
// @lc code=end


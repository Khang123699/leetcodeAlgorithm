class MyQueue {
    private:
    std::stack<int> s_in;
    std::stack<int> s_out;
    void transfer(){
        if(s_out.empty()){
            while(!s_in.empty()){
                s_out.push(s_in.top());
                s_in.pop();
            }
        }
    }
public:
    MyQueue() {

    }
    
    void push(int x) {
        s_in.push(x);
    }
    
    int pop() {
        transfer();
        int front=s_out.top();
        s_out.pop();
        return front;
    }
    
    int peek() {
        transfer();
        return s_out.top();
    }
    
    bool empty() {
       return s_out.empty()&&s_in.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
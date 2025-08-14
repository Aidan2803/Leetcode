class MyQueue {
    private:
    std::stack<int> in_stack_;
       std::stack<int> out_stack_;

       void transfer(){
        while(!in_stack_.empty()){
            out_stack_.push(in_stack_.top());
            in_stack_.pop();
        }
       }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in_stack_.push(x);
    }
    
    int pop() {
        if(out_stack_.empty()){
            if(!in_stack_.empty()){
             transfer();
            }
        }

        int ret = out_stack_.top();
        out_stack_.pop();
        return ret;
    }
    
    int peek() {
        if(out_stack_.empty()){
            if(!in_stack_.empty()){
             transfer();
            }
        }
        return out_stack_.top();
    }
    
    bool empty() {
        return in_stack_.empty() && out_stack_.empty();
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
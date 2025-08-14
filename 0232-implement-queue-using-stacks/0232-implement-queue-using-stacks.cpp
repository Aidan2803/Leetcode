class MyQueue {
    private:
    std::stack<int> stack_;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack_.push(x);
    }
    
    int pop() {
        std::vector<int> vect;
        while(stack_.size() > 1){
            vect.push_back(stack_.top());
            stack_.pop();
        }
        int return_value = stack_.top();
        stack_.pop();
        
        for(int i = vect.size()-1; i >= 0; i--){
            stack_.push(vect[i]);
        }

        return return_value;
    }
    
    int peek() {
        std::vector<int> vect;
        while(stack_.size() > 1){
            vect.push_back(stack_.top());
            stack_.pop();
        }
        int return_value = stack_.top();
        stack_.pop();
        
        stack_.push(return_value);
        for(int i = vect.size()-1; i >= 0; i--){
            stack_.push(vect[i]);
        }

        return return_value;
    }
    
    bool empty() {
        std::cout << "size " << stack_.size() << "\n"; 
        return stack_.empty();
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
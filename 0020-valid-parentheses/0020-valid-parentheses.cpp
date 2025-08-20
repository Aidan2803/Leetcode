class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets_stack;

        for(auto c : s){
            if(c == '(' || c == '{' || c == '['){
                brackets_stack.push(c);
            } else if(c == ')' || c == '}' || c == ']'){
                if(!brackets_stack.empty() && 
                ((brackets_stack.top() == '(' && c == ')') ||
                (brackets_stack.top() == '{' && c == '}') ||
                (brackets_stack.top() == '[' && c == ']')) ){
                    brackets_stack.pop();
                } else {return false;}
            }
        }

        return brackets_stack.empty();

        
    }
};
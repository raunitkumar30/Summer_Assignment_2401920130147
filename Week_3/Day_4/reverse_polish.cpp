class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> my_stack;
        
        for (string token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int second_number = my_stack.top();
                my_stack.pop();
                
                int first_number = my_stack.top();
                my_stack.pop();
                
                int result = 0;
                
                if (token == "+") {
                    result = first_number + second_number;
                } else if (token == "-") {
                    result = first_number - second_number;
                } else if (token == "*") {
                    result = first_number * second_number;
                } else if (token == "/") {
                    result = first_number / second_number;
                }
                
                my_stack.push(result);
            } else {
                int number = stoi(token);
                my_stack.push(number);
            }
        }
        
        return my_stack.top();
    }
};

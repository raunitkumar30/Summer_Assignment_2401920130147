class Solution {
public:
    bool isValid(string s) {
        stack<char> storage;
        
        for (int i = 0; i < s.length(); i++) {
            char current_character = s[i];
            
            if (current_character == '(' || current_character == '{' || current_character == '[') {
                storage.push(current_character);
            } else {
                if (storage.empty()) {
                    return false;
                }
                
                char top_character = storage.top();
                
                if ((current_character == ')' && top_character == '(') ||
                    (current_character == '}' && top_character == '{') ||
                    (current_character == ']' && top_character == '[')) {
                    storage.pop();
                } else {
                    return false;
                }
            }
        }
        
        if (storage.empty()) {
            return true;
        } else {
            return false;
        }
    }
};

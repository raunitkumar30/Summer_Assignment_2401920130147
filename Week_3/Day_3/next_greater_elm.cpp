class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> s;
        
        for (int i = 0; i < nums2.size(); i++) {
            int currentNumber = nums2[i];
            while (!s.empty() && s.top() < currentNumber) {
                nextGreaterMap[s.top()] = currentNumber;
                s.pop();
            }
            s.push(currentNumber);
        }
        
        while (!s.empty()) {
            nextGreaterMap[s.top()] = -1;
            s.pop();
        }
        
        vector<int> result(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            result[i] = nextGreaterMap[nums1[i]];
        }
        
        return result;
    }
};

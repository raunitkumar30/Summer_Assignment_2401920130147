class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int totalDays = temperatures.size();
        vector<int> daysToWait(totalDays, 0);
        stack<int> s;
        
        for (int i = 0; i < totalDays; i++) {
            int currentTemperature = temperatures[i];
            while (!s.empty() && temperatures[s.top()] < currentTemperature) {
                int previousDayIndex = s.top();
                s.pop();
                daysToWait[previousDayIndex] = i - previousDayIndex;
            }
            s.push(i);
        }
        
        return daysToWait;
    }
};

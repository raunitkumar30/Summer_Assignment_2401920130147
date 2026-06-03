class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double csum = 0;
        for (int i = 0; i < k; i++) {
            csum += nums[i];
        }
        double max_sum = csum;
        for (int i = k; i < nums.size(); i++) {
            csum += nums[i] - nums[i - k];
            max_sum = max(max_sum, csum);
        }
        return max_sum / k;
    }
};

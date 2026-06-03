class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water= 0;
        int start= 0;
        int end= height.size() - 1;
        while (start < end) {
            int width = end - start;         
            int min_height =min(height[start], height[end]);
            int current_water= width * min_height;
            max_water =max(max_water, current_water);
            if(height[start]< height[end]) 
            {
                start++;
            } 
            else 
            {
                end--;
            }
        }
        return max_water;
    }
};

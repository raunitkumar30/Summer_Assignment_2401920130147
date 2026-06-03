class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        bool flag=false;
        vector <int> ans(2);
        for(int i=0;i<n;i++)
        {
            for(int j=(i+1);j<n;j++)
            {
                if(nums[i] + nums[j]== target)
                {
                    ans[0]=i;
                    ans[1]=j;
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
        }
        return ans;
    }
};

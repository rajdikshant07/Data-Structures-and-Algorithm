class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int sum = nums[0];        // start with first element
        int maxSum = nums[0];     // start with first element
        
        for(int i = 1; i < n; i++){
            sum = max(nums[i], sum + nums[i]);  // either start new or extend
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};

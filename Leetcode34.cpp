//doing the leetcode problem 34: Find First and Last Position of Element in Sorted Array..give me the leetcode solution
class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        vector<int> result(2, -1);

        // Find the first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (left >= nums.size() || nums[left] != target) {
            return result; // Target not found
        }
        result[0] = left;

        // Find the last occurrence
        right = nums.size() - 1; // Reset right pointer
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        result[1] = right;

        return result;
    }
};
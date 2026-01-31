class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Edge cases
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;

        int left = 1;
        int right = n - 2;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check peak
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            // Move right
            else if (nums[mid] > nums[mid - 1]) {
                left = mid + 1;
            }
            // Move left
            else {
                right = mid - 1;
            }
        }

        return -1; // never reached (guaranteed peak exists)
    }
};

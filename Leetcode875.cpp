
class Solution {
    public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hoursSpent = 0;

            for (int pile : piles) {
                hoursSpent += (pile + mid - 1) / mid; // Ceiling division
            }

            if (hoursSpent <= h) {
                result = mid; // Potential answer found
                right = mid - 1; // Try to find a smaller valid speed
            } else {
                left = mid + 1; // Increase speed
            }
        }

        return result;
    }
};

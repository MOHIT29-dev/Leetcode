class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {

        set<long long> window; // ordered set to keep window sorted

        for (int i = 0; i < nums.size(); i++) {

            // Maintain sliding window size
            if (i > indexDiff) {
                window.erase(nums[i - indexDiff - 1]);
            }

            // Find the smallest element >= nums[i] - valueDiff
            auto it = window.lower_bound((long long)nums[i] - valueDiff);

            // Check if it satisfies the value condition
            if (it != window.end() && abs(*it - nums[i]) <= valueDiff) {
                return true;
            }

            // Insert current element into window
            window.insert(nums[i]);
        }

        return false;
    }
};

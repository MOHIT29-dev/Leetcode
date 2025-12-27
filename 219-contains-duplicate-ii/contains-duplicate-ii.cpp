class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Map to store the last index where each number appeared
        unordered_map<int, int> lastindex;

        // Traverse the array
        for(int i =0 ; i< nums.size(); i++){
            // Check if current number has appeared before
            if (lastindex.count(nums[i])){
                // Check if the distance between indices is <= k
                if (i-lastindex[nums[i]] <= k){
                    return true; // Duplicate found within range
                }
            }

            // Update the last seen index of the current number

            lastindex[nums[i]] = i;
        }

        // No valid duplicate found
        return false;
    }
};

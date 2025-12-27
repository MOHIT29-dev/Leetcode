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
                    return true;
                }
            }
            lastindex[nums[i]] = i;
        }
        return false;
    }
};

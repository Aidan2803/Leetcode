class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;  // To handle cases where a prefixSum itself equals k
        int prefixSum = 0;
        int count = 0;
        
        for (int num : nums) {
            prefixSum += num;
            
            // Check if prefixSum - k exists in the map
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k];
            }
            
            // Store the current prefixSum in the map
            prefixSumCount[prefixSum]++;
        }
        
        return count;
    }
};

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int prefixSum = 0;
        int length = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += (nums[i] == 1) ? 1 : -1;

            if (mp.find(prefixSum) != mp.end())
            {
                length = max(length, i - mp[prefixSum]);
            }
            else mp[prefixSum] = i;
        }
        return length;
    }
};
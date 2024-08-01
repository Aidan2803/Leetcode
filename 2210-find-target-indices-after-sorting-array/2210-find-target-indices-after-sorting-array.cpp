class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> indexes;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == target){indexes.push_back(i);}
        }
        return indexes;
    }
};
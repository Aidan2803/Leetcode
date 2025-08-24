class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int find = target - nums[i];
            std::cout << find << "\n";
            if(map[find] && map[find] != i){
                return std::vector<int>{i, map[find]};
            }
        }
        return std::vector<int>(); 
    }
};
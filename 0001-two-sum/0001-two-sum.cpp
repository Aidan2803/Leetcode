class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            int find_value = target - nums[i];
            std::cout << "find value " << find_value << "\n"; 

            if(map.count(find_value)){
                std::cout << "i" << i;
                return {map[find_value], i};
            }
            map[nums[i]] = i;
            std::cout << "map[nums[i]] " <<  map[nums[i]] << "\n";
        }
        return {};
    }
};
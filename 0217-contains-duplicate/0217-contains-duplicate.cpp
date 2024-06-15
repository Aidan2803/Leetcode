class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            if(map.contains(nums[i])){
                std::cout << "???\n";
                return true;
            }
            std::cout << nums[i] << "\n";
            map[nums[i]] = i;
            std::cout << "in hash table " << map[nums[i]] << std::endl;

            std::cout << "map.contains(nums[i]) " << map.contains(nums[i]) << std::endl;
        }

        return false;        
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map;
        for(int number : nums){
            if(++map[number] > 1){
                return true;
            }
        }
        return false;
    }
};
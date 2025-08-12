class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map;
        for(int number : nums){
            std::cout << map[number] << " " << number << "\n";
            if(++map[number] > 1){
                return true;
            }
        }
        return false;
    }
};
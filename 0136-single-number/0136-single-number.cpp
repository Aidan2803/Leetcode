class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_number = 0;

        for(auto &n : nums){
            single_number ^= n;
        }

        return single_number;
    }
};
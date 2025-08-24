class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) {
            return intersect(nums2, nums1); // ensure nums1 is smaller
        }

        std::unordered_map<int, int> number_to_amount;
        std::vector<int> result;

        for(int num : nums1){
            number_to_amount[num]++;
        }

        for(int num : nums2){
            auto it = number_to_amount.find(num);
            if(it != number_to_amount.end() && it->second > 0){
                result.push_back(num);
                it->second--;
            }
        }

        return result;
    }
};

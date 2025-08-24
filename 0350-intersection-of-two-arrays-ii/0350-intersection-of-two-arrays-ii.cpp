class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> result_vector;
        std::unordered_map<int, int> number_to_amount;

        if(nums1.size() > nums2.size()){
            for(int i = 0; i < nums1.size(); i++){
                number_to_amount[nums1[i]]++;
            }
            
            for(int i = 0; i < nums2.size(); i++){
                auto it = number_to_amount.find(nums2[i]);
                if(it != number_to_amount.end() && it->second != 0){
                    result_vector.push_back(nums2[i]);
                    number_to_amount[nums2[i]]--;
                }
            }
        } else {
            for(int i = 0; i < nums2.size(); i++){
                number_to_amount[nums2[i]]++;
            }

            for(int i = 0; i < nums1.size(); i++){
                auto it = number_to_amount.find(nums1[i]);
                if(it != number_to_amount.end() && it->second != 0){
                    result_vector.push_back(nums1[i]);
                    number_to_amount[nums1[i]]--;
                }
            }
        }

        return result_vector;

    }
};
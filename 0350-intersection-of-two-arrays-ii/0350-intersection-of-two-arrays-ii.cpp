class Solution {
public:
    // Initial variant of solution
    // vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    //     if(nums1.size() > nums2.size()) {
    //         return intersect(nums2, nums1); // ensure nums1 is smaller
    //     }

    //     std::unordered_map<int, int> number_to_amount;
    //     std::vector<int> result;

    //     for(int num : nums1){
    //         number_to_amount[num]++;
    //     }

    //     for(int num : nums2){
    //         auto it = number_to_amount.find(num);
    //         if(it != number_to_amount.end() && it->second > 0){
    //             result.push_back(num);
    //             it->second--;
    //         }
    //     }

    //     return result;
    // }

    // If arrays are already sorted
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        std::vector<int> result_vector;
        // sort for testing
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());

        int first_arr_index = 0;
        int second_arr_index = 0;

        while(first_arr_index < nums1.size() && second_arr_index < nums2.size()){
            if (nums1[first_arr_index] < nums2[second_arr_index]){            first_arr_index++;}
            else if(nums1[first_arr_index] > nums2[second_arr_index]){
                second_arr_index++;
            }
            else {
                result_vector.push_back(nums1[first_arr_index]);
                first_arr_index++;
                second_arr_index++;
            }


        }
        return result_vector;
    }

};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      std::unordered_set<int> nums1_set(nums1.begin(), nums1.end());
      std::unordered_set<int> intersection;

      for(auto val : nums2){
        if(nums1_set.contains(val)){
            intersection.insert(val);
        }
      }
    
    vector<int> results(intersection.begin(), intersection.end());
    return results;
    }
};
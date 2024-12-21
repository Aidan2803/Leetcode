class Solution {
public:
    Solution(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums_.push_back(nums[i]);
        }
        original_ = nums_;
    }
    
    vector<int> reset() {
        return original_;
    }
    
    vector<int> shuffle() {
        for(int i = 0; i < nums_.size(); i++){
            std::swap(nums_[i], nums_[rand() % nums_.size()]);
        }
        return nums_;
    }
private:
    vector<int> nums_;
    vector<int> original_;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
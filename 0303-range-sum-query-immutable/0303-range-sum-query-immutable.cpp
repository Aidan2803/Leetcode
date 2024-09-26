class NumArray {
public:
    NumArray(vector<int>& nums) {
        numbers_ = nums;
        prefix_sum_.reserve(nums.size());
        PrefixSumOfNumbers();
    }

    void PrefixSumOfNumbers(){
        prefix_sum_[0] = numbers_[0];

        for(int i = 1; i < numbers_.size(); i++){
            prefix_sum_[i] = prefix_sum_[i - 1] + numbers_[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefix_sum_[right];
        }

        return prefix_sum_[right] - prefix_sum_[left - 1];
    }

private:
    vector<int> prefix_sum_;
    vector<int> numbers_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
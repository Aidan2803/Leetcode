class Solution {
public:
  void moveZeroes(std::vector<int> &nums) {
    int lastNonZero = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            nums[lastNonZero] = nums[i];
            lastNonZero++;
        }
    }

    for(int i = lastNonZero; i < nums.size(); i++){
        nums[i] = 0;
    }

  }
};
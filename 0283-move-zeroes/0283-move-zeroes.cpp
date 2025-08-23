class Solution {
public:
  void moveZeroes(std::vector<int> &nums) {
    int zeroes_amount = 0;
    for(int i = nums.size() - 1; i >= 0; i--){
        if(nums[i] == 0){
            zeroes_amount++;
            nums.erase(nums.begin() + i);
        }
    }

    for(int i = 0; i < zeroes_amount; i++){
        nums.push_back(0);
    }
  }
};
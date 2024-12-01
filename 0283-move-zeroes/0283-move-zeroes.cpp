class Solution {
public:
  void moveZeroes(std::vector<int> &nums) {
    int max_element = *(std::max_element(nums.begin(), nums.end()));
    if (max_element == 0) {
      return;
    }

    int zero_counter = 0;

    for (auto it = nums.begin(); it != nums.end();) {
      if (*it == 0) {
        it = nums.erase(it);
        zero_counter++;
      } else {
        ++it;
      }
    }

    nums.insert(nums.end(), zero_counter, 0);
  }
};
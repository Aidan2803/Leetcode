class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        
        while(i <= j){
            int k = i + (j - i) / 2;
            std::cout << "k: " << k << "\n";
            if(nums[k] > target){
                j = k - 1;
                std::cout << "nums[k] > target\n";
            }
            else if (nums[k] < target){
                i = k + 1;
                std::cout << "nums[k] < target\n";
            }
            else if (nums[k] == target){
                return k;
            }
        }
        return -1;
    }
};
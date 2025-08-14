class Solution {
public:
int search(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    
    while (i <= j) {
        int k = i + (j - i) / 2; // avoids overflow
        
        if (nums[k] > target) {
            j = k - 1;
        }
        else if (nums[k] < target) {
            i = k + 1;
        }
        else {
            return k;
        }
    }
    return -1;
}
};
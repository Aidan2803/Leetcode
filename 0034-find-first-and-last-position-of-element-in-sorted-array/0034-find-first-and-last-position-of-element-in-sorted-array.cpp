class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() -1;
        int result = -1;

        while(low <= high){
            int mid = (high + low) / 2;
            if(nums[mid] == target){
                std::cout << "hit\n";
                result = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target){
                high = mid - 1;
                std::cout << nums[mid] << " mid > target\n";
            }
            else if (nums[mid] < target) {
                low = mid + 1;
                std::cout << low << " low " << nums[mid] << " mid < target\n";
            }
        }
        return result;
    }

    int upperBound(vector<int>& nums, int target){

        int low = 0;
        int high = nums.size() -1;
        int result = -1;

        while(low <= high){
            int mid = (high + low) / 2;
            if(nums[mid] == target){
                std::cout << "hit\n";
                result = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target){
                high = mid - 1;
                std::cout << nums[mid] << " mid > target\n";
            }
            else if (nums[mid] < target) {
                low = mid + 1;
                std::cout << low << " low " << nums[mid] << " mid < target\n";
            }
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        std::vector<int> range;
        range.push_back(lowerBound(nums, target));
        range.push_back(upperBound(nums, target));

        return range;
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double max_avg = 0;

        int left = 0;
        int right = k;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        max_avg = sum;

        while(right < nums.size()){
            sum = sum - nums[left] + nums[right];
            if(sum > max_avg){max_avg = sum;}

            right++;
            left++;
        }
        return max_avg/k;
    }
};
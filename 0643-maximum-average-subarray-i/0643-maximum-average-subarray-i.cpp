class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double avg = 0;
        double max_avg = 0;

        int left = 0;
        int right = k;

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        std::cout << sum << "\n";

        avg = sum / k;
        max_avg = avg;

        while(right < nums.size()){
            sum = sum - nums[left] + nums[right];
            std::cout << sum << "\n";
            avg = sum / k;
            if(avg > max_avg){max_avg = avg;}

            right++;
            left++;
        }
        return max_avg;
    }
};
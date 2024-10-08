class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int initial_sum = 0;
    int max_sum = 0;

    for (int j = 0; j < k; j++)
    {
        initial_sum += nums[j];
    }

    max_sum = initial_sum;

    int i = 0;
    int beg = 0;
    int end = i + k;
    int sum = initial_sum;
    while (i < nums.size() - k)
    {
        sum = sum - nums[beg] + nums[end];
        i++;
        beg++;
        end++;

        max_sum = std::max(max_sum, sum);
    }

    return static_cast<double>(max_sum) / k;
    }
};
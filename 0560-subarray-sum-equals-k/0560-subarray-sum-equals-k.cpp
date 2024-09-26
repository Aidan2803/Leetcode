class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefSumCount;
        prefSumCount[0] = 1; 
        int presum = 0;
        int counter = 0;

        for(auto& n : nums){
            presum += n;

            if(prefSumCount.find(presum - k) != prefSumCount.end()){
                counter += prefSumCount[presum - k];
            }    


            prefSumCount[presum]++;
        }

        return counter;
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int presum = 0;
        int i = 0;
        int max_altitude = 0;
        while(i < gain.size()){
            presum = presum + gain[i];
            if(presum > max_altitude){max_altitude = presum;}
            i++;
        }
        return max_altitude;
    }
};
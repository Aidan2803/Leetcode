class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> return_vector;
        int max_candies = *(std::max_element(candies.begin(), candies.end()));
        for(int i = 0; i < candies.size(); i++){
            int added_candies = candies[i] + extraCandies;
            if(added_candies >= max_candies){
                return_vector.push_back(true);
            } else {
                return_vector.push_back(false);
            }
        }

        return return_vector;
    }
};
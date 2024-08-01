class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        std::sort(expected.begin(), expected.end());
        
        int counter{};
        for(int i = 0; i < heights.size(); i++){
            if (heights[i] != expected[i]){
                counter++;
            }
        }      
        return counter;
    }
};
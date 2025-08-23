class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<vector<int>> returnVector;
        for(int i = 0; i < numRows; i++){
            returnVector.push_back(std::vector<int>());
            
            returnVector[i].push_back(1);
            
            for(int j = 1; j < i; j++){
                returnVector[i].push_back(returnVector[i-1][j-1] + returnVector[i-1][j]);
            }
            if(i > 0){
                returnVector[i].push_back(1);
            }

        }
        return returnVector;
    }
};
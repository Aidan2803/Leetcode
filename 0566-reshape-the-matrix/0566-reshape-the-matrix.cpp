class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> new_mat;

        int cols = mat[0].size();
        int rows = mat.size();

        if(mat.size() * mat[0].size() != r * c){
            return mat;
        }

        new_mat.push_back(vector<int>());

        int rows_counter = 0;
        int cols_counter = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                new_mat[rows_counter].push_back(mat[i][j]);
                cols_counter++;
                if(cols_counter == c){
                    std::cout << "new row\n";
                    if(rows_counter != r - 1){
                        new_mat.push_back(vector<int>());
                        rows_counter++;
                    }                    
                    cols_counter = 0;
                }
            }
        }

        return new_mat;

    }
};
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string new_string;
        int min_size = std::min(word1.size(), word2.size());
        for(int i = 0; i < min_size; i++){
            new_string.push_back(word1[i]);
            new_string.push_back(word2[i]);
        }

        if(word1.size() > word2.size()){
            new_string.append(word1.begin() + min_size, word1.end());
        } else {
            new_string.append(word2.begin() + min_size, word2.end());
        }

        return new_string;

    }
};
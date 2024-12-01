class Solution {
public:
    vector<int> countBits(int n) {
        std::vector<int> return_vect;
        for(int i = 0; i <= n; i++){
            int counter = 0;
            int number = i;

            while(number > 0){
                number = (number & number-1);
                counter++; 
            }
            return_vect.push_back(counter);
        }
        return return_vect;
    }
};
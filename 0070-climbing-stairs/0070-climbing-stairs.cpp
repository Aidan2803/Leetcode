class Solution {
public:
    int helper(int n, vector<int> &mem){
        if (n == 1){return 1;}
        if (n == 2) {return 2;}

        if(mem[n] != -1){
            return mem[n];
        }

        mem[n] = helper(n - 1, mem) + helper(n - 2, mem);

        return mem[n];
    } 

    int climbStairs(int n) {
        std::vector mem(n + 1, -1);
        return helper(n, mem);
    }
};
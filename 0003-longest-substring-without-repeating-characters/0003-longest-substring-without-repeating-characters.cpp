class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> map;

        int max_len = 0;
        int cur_len = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++){
            while(map.count(s[right])){
                map.erase(s[left]);
                left++;
            }
            map[s[right]] = right;

            cur_len = (right - left) + 1;
            
            if(cur_len > max_len){
                 max_len = cur_len;
            }  
        }
        
        return max_len;
    }
};
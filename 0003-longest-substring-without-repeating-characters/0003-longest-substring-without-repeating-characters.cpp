class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    std::unordered_set<char> set;
    int left = 0;
    int max_len = 0;

    for(int right = 0; right < s.size(); right++){
        if(!set.count(s[right])){
            set.insert(s[right]);
        } else {
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
        }

        max_len = std::max(max_len, static_cast<int>(set.size()));
    }

    return max_len;
    
    }
};
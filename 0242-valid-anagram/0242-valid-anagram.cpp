
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }
    int array[26];

    for(auto c : s){
        array[c - 'a']++;
    }

    for(auto c : t){
        if(--array[c - 'a'] < 0){
            return false;
        }
    }
    return true;
  }
};
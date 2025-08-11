
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }

    std::unordered_map<char, int> map_s;
    for (auto c : s) {
      map_s[c]++;
    }

    std::unordered_map<char, int> map_t;
    for (auto c : t) {
      map_t[c]++;
    }

    for (int i = 0; i < s.size(); i++) {
      std::cout << "map_s[i] " << map_s[s[i]] << " map_t[i] " << map_t[s[i]]
                << " s: " << s[i] << "\n";
      if (map_s.find(s[i]) != map_s.end() && map_t.find(s[i]) != map_t.end()) {
        if (map_s[s[i]] != map_t[s[i]]) {
          return false;
        }
      } else {
        return false;
      }
    }
    return true;
  }
};
class Solution {
public:
  bool isVowel(char letter) {
    return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
           letter == 'u';
  }

  int maxVowels(string s, int k) {
    int vowels = 0;
    int max_vowels = 0;

    for (int i = 0; i < k; i++) {
      if (isVowel(s[i])) {
        vowels++;
      }
    }

    max_vowels = std::max(vowels, max_vowels);

    int right = k;
    int left = 0;
    while (right < s.size()) {
      if (isVowel(s[right])) {
        vowels++;
      }
      if (isVowel(s[left])) {
        vowels--;
      }

      max_vowels = std::max(vowels, max_vowels);
      right++;
      left++;
    }

    return max_vowels;
  }
};
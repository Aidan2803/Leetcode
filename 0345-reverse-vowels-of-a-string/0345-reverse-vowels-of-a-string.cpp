class Solution {
public:
  bool isVowel(char c) {
    return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
  }

  string reverseVowels(string s) { int right = s.size() - 1;
  int left = 0;

  while(left < right){
    if(isVowel(s[left]) && isVowel(s[right])){
        std::swap(s[left], s[right]);
        right--;
        left++;
    }
    if(!isVowel(s[left])){
        left++;

    }
    if (!isVowel(s[right])){
        right--;
    }
  }
  return s;
  }
};
class Solution {
public:
    int firstUniqChar(string s) {
        // Array to store frequency count of each character (26 lowercase letters)
        int charFrequency[26] = {0};
      
        // First pass: Count frequency of each character in the string
        for (char& c : s) {
            charFrequency[c - 'a']++;
        }
      
        // Store string length for iteration
        int stringLength = s.size();
      
        // Second pass: Find the first character with frequency of 1
        for (int i = 0; i < stringLength; ++i) {
            if (charFrequency[s[i] - 'a'] == 1) {
                return i;  // Return the index of first unique character
            }
        }
      
        // No unique character found
        return -1;
    }
};

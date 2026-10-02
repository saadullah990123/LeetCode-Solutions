class Solution {
public:
    int maxVowels(string s, int k) {
        int totalVowel = 0, maxVowel = s[0];
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i]=='u') {
                totalVowel++;
            }
        }
        maxVowel = totalVowel;
        for (int i = k; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u') {
                totalVowel++;
            }
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u') {
                totalVowel--;
            }
            maxVowel = max(maxVowel, totalVowel);
        }
        return maxVowel;
    }
};
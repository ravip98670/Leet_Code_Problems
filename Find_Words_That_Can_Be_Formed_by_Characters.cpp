class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charFreq;

       
        for (char ch : chars) {
            charFreq[ch]++;
        }

        int totalLength = 0;

        for (string word : words) {
            unordered_map<char, int> wordFreq;
            bool isPossible = true;

            
            for (char ch : word) {
                wordFreq[ch]++;
            }

            for (auto entry : wordFreq) {
                char ch = entry.first;
                int count = entry.second;

                if (charFreq[ch] < count) {
                    isPossible = false;
                    break;
                }
            }

            if (isPossible) {
                totalLength += word.length();
            }
        }

        return totalLength;
    }
};
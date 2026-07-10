class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;

        for (char c : t)
            need[c]++;

        int missing = t.size();

        int left = 0;
        int start = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];

            if (need[c] > 0)
                missing--;

            need[c]--;

            while (missing == 0) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char x = s[left];

                need[x]++;

                if (need[x] > 0)
                    missing++;

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};
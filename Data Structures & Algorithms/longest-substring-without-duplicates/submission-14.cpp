class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        int l = 0;

        for(int i = 0; i < s.size(); i++)
        {
            auto it = find(s.begin() + l, s.begin() + i, s[i]);

            if(it != s.begin() + i)
            {
                l = max(l, int(it - s.begin()) + 1);
            }

            ans = max(ans, i - l + 1);
        }

        return ans;
    }
};
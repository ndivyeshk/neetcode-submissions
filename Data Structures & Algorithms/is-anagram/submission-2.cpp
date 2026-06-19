class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.length()==t.length())
        {
            unordered_map<char, int> dict;
            unordered_map<char,int> dist;
            for(int i=0;i<s.length();i++)
            {
                dict[s[i]]++;
                dist[t[i]]++;
            }
            if(dict==dist)
            {
                return true;
            }
            else
            {
                return false;
            }
        }   
        else
        {
            return false;
        } 
    }
};

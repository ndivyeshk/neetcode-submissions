class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> vv;
        vector<int> x;
        for(int i=0;i<strs.size();i++)
        {
            if(find(x.begin(),x.end(),i)==x.end())
            {
                vector<string> v;
                v.push_back(strs[i]);
            
                for(int j=1+i;j<strs.size();j++)
                {
                    if (isAnagram(strs[i],strs[j]))
                    {
                        v.push_back(strs[j]);
                        x.push_back(j);
                    }
                }
                vv.push_back(v);
            }
            
        }
        return vv;
    }
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

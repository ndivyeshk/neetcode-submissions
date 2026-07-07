class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int ans=0;
        int l=0;
        int r=0;
        int len=s.length();
        int maxi=0;
        int wid=r+1-l;
        unordered_map<char, int> freq;
        while(l<=r and r<len)
        {
            for (int i=0;i<len;i++)
            {

            
            wid=r+1-l;
            freq[s[r]]++;
            maxi=max(maxi,freq[s[r]]);
            if((wid-maxi)>k)
            {
                freq[s[l]]--;
                l++;
                r++;
            }
            else
            {
                ans=max(ans,wid);
                r++;
            }
            
            }
        }
            
            
        return ans;    
    }
};

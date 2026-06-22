class Solution {
public:
    bool isPalindrome(string s)
    {
        string ss;
        for(char c:s)    
        {
            if ( isalnum(c))
            {
                ss+=tolower(c);
            }
        }
        for(char c:ss)    
        {
            cout<<c;
        }
        
       int q= ss.size();
        for(int i=0;i<q/2;i++)
        {
            if(ss[i]!=ss[q-1-i])
            {
                return false;
            }
        }
        return true;
    }

};

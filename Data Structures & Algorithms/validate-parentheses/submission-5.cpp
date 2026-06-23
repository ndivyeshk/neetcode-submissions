class Solution 
{
public:
    bool isValid(string s) 
    {
        vector<char> v;
        for(char c : s)
        {
            if (c=='(' or c=='[' or c=='{')
            {
                v.push_back(c);
            }
            else
            {
                if (v.empty())
                {
                    return false;
                }

                else if (c==')')
                {
            
                    if (v.back()=='(')
                    {
                        v.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (c==']')
                {
                    
                    if (v.back()=='[')
                    {
                        v.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                }

                else if (c=='}')
                {
            
                    if (v.back()=='{')
                    {
                        v.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                } 
                
            }
        }  
        if (v.empty())  
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

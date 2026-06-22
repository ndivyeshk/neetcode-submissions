class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> output;
        for(int i=0;i<nums.size();i++)
        {
            int p=1;
            for(int j=0;j<nums.size();j++)
            {
                if (j==i)
                {
                    continue;
                }
                else
                {
                    p*=nums[j];
                }
                
            }
            output.push_back(p);
        }
        
        return output;

    }
};

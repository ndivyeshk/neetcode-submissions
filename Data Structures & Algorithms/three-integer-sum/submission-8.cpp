class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int> r;
                        r.push_back(nums[i]);
                        r.push_back(nums[j]);
                        r.push_back(nums[k]);
                        sort(r.begin(),r.end());
                        if(find(result.begin(),result.end(),r)==result.end())
                        {
                            result.push_back(r);
                        }
                    }
                }
            }
        }

        return result;    
    }
};

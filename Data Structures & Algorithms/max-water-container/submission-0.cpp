class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int area=0;
        for(int i=0;i<heights.size()+1;i++)
        {
            for(int j=i;j<heights.size();j++)
            {
                int a=min(heights[i],heights[j])*abs(i-j);
                area=max(area,a);
            }
        } 
        return area;   
    }
};

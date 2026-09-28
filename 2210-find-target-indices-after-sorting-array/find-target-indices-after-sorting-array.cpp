class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        
            for(int j=0; j<nums.size()-1;j++)
            {
                for(int k=0; k<nums.size()-j-1;k++)
                {
                    if(nums[k]>nums[k+1])
                    {
                        swap(nums[k],nums[k+1]);
                    }
                }
            }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            ans.push_back(i);
        }
        return ans;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        for(int i=0; i<nums.size()-1;i++)
        { for(int j=0;j<nums.size()-i-1;j++)
              {
                if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
              }

        }
       int b= nums[nums.size()-1]-1;
       int c=nums[nums.size()-2]-1;
       int ans= b*c;
       return ans;
        
    }
};
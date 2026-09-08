class Solution {
public:
    int countElements(vector<int>& nums) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            int count1=0;
            int b=nums[i];
            for(int j=0;j<nums.size();j++)
            {   if(nums[j]<b)
               { count++;
               }
                if(nums[j]>b)
                {count1++;
                }

            }
            if(count>=1 && count1>=1)
            {ans++;}
        }
        return ans;
    }
};
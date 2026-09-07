class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int flag=0;
        while(true)
        {   flag=0;
            for(int i=0; i<nums.size();i++)
            {
                if(nums[i]==original)
                {  flag++;
                  original=2*original;

                }
            }
            if(flag==0)
            break;
        }
      return original;
        
    }
};
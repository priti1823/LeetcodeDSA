class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int b=nums[i];
            for(int j=0; j<nums.size();j++)
            {
                if(-b==nums[j])
                {  if(b<0)
                    b=-b;
                    ans.push_back(b);
                

                }
            }
        }
        if(ans.size()==0)
        {
            return -1;
        }
        int c=INT_MIN;
        for(int i=0; i<ans.size();i++)
        {
            if(ans[i]>c)
            c=ans[i];
        }
        return c;
        
    }
};
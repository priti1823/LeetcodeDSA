class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i+=2)
        {
            int b=nums[i];
            int c=nums[i+1];
            while(b>0)
            {
                ans.push_back(c);
                b--;
            }

        }
        return ans;

        
    }
};
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int b=i%10;
            if(nums[i]==b)
            return i;
        }
        return -1;
    }
};
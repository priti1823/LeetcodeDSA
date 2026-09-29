class Solution {
public:
    int arraySign(vector<int>& nums) {
        int flag=0;
        int counter=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                flag=1;
            }
            else if(nums[i]<0)
            {
                counter++;
            }
        }
        if( flag==1)
        {
            return 0;
        }
        else if(counter%2!=0)
        {
            return -1;
        }
        return 1;
    }
};
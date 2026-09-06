class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int b=nums.size()/2;
        int key=nums[b];
        for(int i=0;i<nums.size();i++)
        {  if(i!=b)
           { if(nums[i]==key)
              return false;

            }

        }
        return true;
    }
};
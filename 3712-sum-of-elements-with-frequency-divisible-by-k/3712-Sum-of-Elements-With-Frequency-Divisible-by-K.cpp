class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        { int count=0;
           if(i==0||nums[i]!=nums[i-1])
           { for(int j=0;j<nums.size();j++)
             {
                if(nums[i]==nums[j])
                  count++;
           
             }
             if(count%k==0)
             {
                sum+=nums[i]*count;
             }
           }

        }
        return sum;
        
        
    }
};
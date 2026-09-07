class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        
        for(int i=0;i<prices.size();i++)
        {     int b=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {  b=prices[j];
                   break;

                }
            }
            if(b==0)
            ans.push_back(prices[i]);
            else
            ans.push_back(prices[i]-b);

        }
        return ans;
    }
};
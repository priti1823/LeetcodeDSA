class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {   int count=0;
            if(i==0||arr[i]!=arr[i-1])
            {  for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
              ans.push_back(count);
            }
           
        }
        for(int k=0;k<ans.size();k++)
        {
            int co=0;
            for(int h=0;h<ans.size();h++)
            {
                if(ans[k]==ans[h])
                {
                    co++;
                }
            }
            if(co>1)
            {
                return false;
            }
        }

        return true;
    }
};
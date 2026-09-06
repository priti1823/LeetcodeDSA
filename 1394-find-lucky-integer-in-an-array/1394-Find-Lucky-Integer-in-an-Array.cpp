class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {   int count=0;
            if(i==0||arr[i]!=arr[i-1])
              { for(int j=0;j<arr.size();j++)
                  {  if(arr[i]==arr[j])
                     {  count++;

                      }

                   }
                   if(arr[i]==count)
                   {
                    ans.push_back(arr[i]);
                   }

               }
        }
        if(ans.size()==0)
        {
            return -1;
        }
        int b=INT_MIN;
        for(int i=0; i<ans.size();i++)
        {
            if(ans[i]>b)
            {
                b=ans[i];
            }
        }
        return b;
        
    }
};
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        vector<int>ans;
        int flag;
        for(int i=0;i<arr1.size();i++)
        { flag=0;
            for(int j=0;j<arr2.size();j++)
            {
                int b=arr1[i]-arr2[j];
                if(b<0)
                {
                    b=-b;
                }
                if(b<=d)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                ans.push_back(arr1[i]);
            }

        }
       int c=ans.size() ;
       return c;
    }
};
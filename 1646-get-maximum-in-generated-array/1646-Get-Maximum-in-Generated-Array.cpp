class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>ans(n+1);
        if(n==1)
        return 1;
        else if(n==0)
        return 0;
        ans[0]=0;
        ans[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                ans[i]=ans[i/2];
            }
            else 
            {
                int c=i/2;
                ans[i]=ans[c]+ans[c+1];
            }
        }
        int d=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>=d)
            d=ans[i];
        }
        return d;
    }
};
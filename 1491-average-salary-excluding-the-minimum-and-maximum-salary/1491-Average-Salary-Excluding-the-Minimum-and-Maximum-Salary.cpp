class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
        }
        int b=INT_MIN;
        int c=INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]<c)
            c=salary[i];
            if (salary[i]>b)
            b=salary[i];
        }
        sum=sum-b-c;
        sum=sum/(salary.size()-2);
        return sum;
        
    }
};
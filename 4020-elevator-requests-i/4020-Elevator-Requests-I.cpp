class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=requests[0];
        for(int i=0;i<requests.size()-1;i++ )
        {
            int b=requests[i]-requests[i+1];
            if(b<0)
            b=-b;
            sum+=b;
        }
        return sum;
        
    }
};
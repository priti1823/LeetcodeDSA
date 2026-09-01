class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        float b=arr.size()*25/100;
        for(int i=0; i<arr.size();i++)
        {   int count=0;
            for(int j=0; j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            if(count>b)
            {
                return arr[i];
            }
        }
        return 0;
    }
};
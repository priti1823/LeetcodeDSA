class Solution {
public:
    bool isPalindrome(int x) {
         int t=x;
        int digit;
        long long rev;
        rev=0;
        while(x>0)
        {
            digit=x%10;
            rev=rev*10+digit;
            x=x/10;
           

        }
         return t==rev;
        
    }
};
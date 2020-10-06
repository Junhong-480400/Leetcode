class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        long temp;
        while(x!=0)
        {
            temp = x % 10;
            x = x/10;
            ans = ans * 10 + temp;
            if (ans >= INT_MAX || ans <= INT_MIN)
                return 0;
        }
        return ans;
    }
};


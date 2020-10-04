class Solution {
public:
    pair<int,int> expandAroundCenter(string &s, int left, int right)
    {
        while(left>=0&&right<s.size()&&s[left]==s[right])
        {
            left--;
            right++;
        }
        return{left+1,right-1};
    }

    string longestPalindrome(string s) {
        int end=0,start=0;

        for(int i =0;i<s.size();i++)
        {
            auto [left1,right1]=expandAroundCenter(s,i,i);
            auto [left2,right2]=expandAroundCenter(s,i,i+1);
            if((right1-left1)>(end-start))
            {
                start = left1;
                end = right1;
            }
            if((right2-left2)>(end-start))
            {
                start = left2;
                end = right2;
            }
        }
        return s.substr(start, end-start+1);
    }
};

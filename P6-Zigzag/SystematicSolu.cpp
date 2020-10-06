class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; //当只是一行时，直接返回
        
        string ans;
        int step = numRows*2-2; //每一个Z的间距
        int add;
        int index;
        int len = s.size();
        for(int i = 0; i < numRows; i++ )
        {
            index = i;  //需读取的下标
            add = 2*i;  //真实的间距
            while(index<len)
            {
                ans += s[index];
                index += (i==0||i==(numRows-1))?step:add = step - add;
            }
        }
        return ans;
    }
};

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        #显然如果是奇数个括号，则一定不成对
        if (n % 2 == 1) {
            return false;
        }

        #生成括号相对应的hash表，以更快地搜索
        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack<char> stk;    #本问题的关键————栈
        for (char ch: s) {
            if (pairs.count(ch)) {
                if (stk.empty() || stk.top() != pairs[ch]) {
                    return false;
                }
                stk.pop();
            }
            else {
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};

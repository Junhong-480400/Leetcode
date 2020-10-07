class Automaton {
    string state = "start";
    unordered_map<string, vector<string>> table = {
        {"start", {"start", "signed", "in_number", "end"}},
        {"signed", {"end", "end", "in_number", "end"}},
        {"in_number", {"end", "end", "in_number", "end"}},
        {"end", {"end", "end", "end", "end"}}
    };

    int get_col(char c) {
        if (isspace(c)) return 0;   //table的第一列代表空格
        if (c == '+' or c == '-') return 1; //table的第二列代表有符号
        if (isdigit(c)) return 2;   //table的第三列代表数字
        return 3;   //table的第四列代表其他情况
    }
public:
    int sign = 1;   //这个代表符号，默认为正数
    long long ans = 0;

    void get(char c) {
        state = table[state][get_col(c)];   //返回当前某一字符的状态
        if (state == "in_number") {
            ans = ans * 10 + c - '0';   //强制从字符转换成数字
            ans = sign == 1 ? min(ans, (long long)INT_MAX) : min(ans, -(long long)INT_MIN);
        }
        else if (state == "signed")
            sign = c == '+' ? 1 : -1;
    }
};

class Solution {
public:
    int myAtoi(string str) {
        Automaton automaton;    //声明一个自动机
        for (char c : str)
            automaton.get(c);
        return automaton.sign * automaton.ans;
    }
};

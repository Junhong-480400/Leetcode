class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string my_ans = "";
        int idx_char = 0;
        int idx_strs;
        int len = strs.size();

        if(len == 0){
            return "";
        }

        if(len == 1){
            return strs[0];
        }

        while(1){
            char temp = strs[0][idx_char];
            for(idx_strs = 1; idx_strs < len; idx_strs++){
                if(temp!=strs[idx_strs][idx_char]||temp=='\0'){
                    return my_ans;
                }
            }
            my_ans.push_back(temp);
            idx_char++;
        }
        return my_ans;
    }
};

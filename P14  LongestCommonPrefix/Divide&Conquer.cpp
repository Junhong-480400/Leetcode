class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) {
            return "";
        }
        else {
            return longestCommonPrefix(strs, 0, strs.size() - 1);
        }
    }

    string longestCommonPrefix(const vector<string>& strs, int start, int end) {
        if (start == end) {
            return strs[start];
        }
        else {
            int mid = (start + end) / 2;
            string lcpLeft = longestCommonPrefix(strs, start, mid);
            string lcpRight = longestCommonPrefix(strs, mid + 1, end);
            return commonPrefix(lcpLeft, lcpRight);
        }
    }

    string commonPrefix(const string& lcpLeft, const string& lcpRight) {
        int minLength = min(lcpLeft.size(), lcpRight.size());
        for (int i = 0; i < minLength; ++i) {
            if (lcpLeft[i] != lcpRight[i]) {
                return lcpLeft.substr(0, i);
            }
        }
        return lcpLeft.substr(0, minLength);
    }
};

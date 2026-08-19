class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;

        function<void(int, string)> backtrack = [&](int i, string cur) {
            if (i == digits.size()) {
                ans.push_back(cur);
                return;
            }

            for (char c : mp[digits[i] - '0'])
                backtrack(i + 1, cur + c);
        };

        backtrack(0, "");

        return ans;
    }
};

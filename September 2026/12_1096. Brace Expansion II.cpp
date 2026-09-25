#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> braceExpansionII(string expression) {
        int pos = 0;
        set<string> ans = solve(expression, pos);
        return vector<string>(ans.begin(), ans.end());
    }

    set<string> solve(string &s, int &i) {
        set<string> result;
        vector<string> current = {""};

        while (i < s.length() && s[i] != '}') {
            if (s[i] == '{') {
                i++;
                set<string> inside = solve(s, i);
                i++;

                vector<string> temp;
                for (string a : current) {
                    for (string b : inside) {
                        temp.push_back(a + b);
                    }
                }
                current = temp;
            }
            else if (s[i] == ',') {
                for (string x : current)
                    result.insert(x);

                current = {""};
                i++;
            }
            else {
                for (string &x : current)
                    x += s[i];

                i++;
            }
        }

        for (string x : current)
            result.insert(x);

        return result;
    }
};

int main() {
    Solution s;

    string expression = "{a,b}{c,{d,e}}";
    vector<string> ans = s.braceExpansionII(expression);

    for (string x : ans)
        cout << x << " ";

    return 0;
}

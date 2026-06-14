class Solution {
public:
    void helper(vector<string>& result, string& str,int open, int close, int n) {

        if(str.length() == 2 * n) {
            result.push_back(str);
            return;
        }

        if(open < n) {
            str.push_back('(');
            helper(result, str, open + 1, close, n);
            str.pop_back();
        }

        if(close < open) {
            str.push_back(')');
            helper(result, str, open, close + 1, n);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string str;

        helper(result, str, 0, 0, n);

        return result;
    }
};
class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int j = 0;
        int n = chars.size();

        for (int i = 0; i < n - 1; i++) {
            if (chars[i] == chars[i + 1]) {
                count++;
            } else {
                chars[j++] = chars[i];

                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s) {
                        chars[j++] = c;
                    }
                }

                count = 1;
            }
        }
        chars[j++] = chars[n - 1];
        if (count > 1) {
            string s = to_string(count);
            for (char c : s) {
                chars[j++] = c;
            }
        }

        return j;
    }
};
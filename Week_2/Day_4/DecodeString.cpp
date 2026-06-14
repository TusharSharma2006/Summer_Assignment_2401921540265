class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;

        string meow;
        int num = 0;

        for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                st.push({meow, num});
                meow = "";
                num = 0;
            }
            else if(ch == ']') {
                auto [prev, times] = st.top();
                st.pop();

                string result;
                while(times--) {
                    result += meow;
                }

                meow = prev + result;
            }
            else {
                meow.push_back(ch);
            }
        }

        return meow;
    }
};
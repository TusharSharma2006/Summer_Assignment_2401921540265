class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> myset;//aur kuch bhi use kr skte thee but isse time complexity better a rhi thi

        int leftptr = 0;
        int ans = 0;

        for (int rightptr = 0; rightptr < s.size(); rightptr++) {

            while (myset.count(s[rightptr])) {
                myset.erase(s[leftptr]);
                leftptr++;
            }

            myset.insert(s[rightptr]);

            ans = max(ans, rightptr - leftptr + 1);
        }

        return ans;
    }
};
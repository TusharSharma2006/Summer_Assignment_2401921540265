class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){ //dono m ek ek ptr lga diya hai aur fir element ki existence check kri hai sequence mein..
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(i>=s.length()){
            return true;
        }else{
            return false;
        }
    }
};
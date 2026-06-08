class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[26] = {0};
        int hash2[26] = {0};
        for(char ch:s){
            hash1[ch - 'a'] += 1;
        }
        for(char ch:t){
            hash2[ch - 'a'] += 1;
        }
        for(int i = 0;i<26;i++){
            if(hash1[i]==hash2[i]){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
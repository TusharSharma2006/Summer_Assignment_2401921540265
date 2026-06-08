class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int hash1[26] = {0};
        int hash2[26] = {0};
        
        for(char it:ransomNote){
            hash1[it-'a']+=1;
        }

        for(char it:magazine){
            hash2[it-'a']+=1;
        }

        for(int i = 0;i<26;i++){
            if(hash1[i]>hash2[i]){
                return false;
            }
        }

        return true;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low<=high){
            if(!isalnum(s[low])==true){
                low++;
            }else if(!isalnum(s[high])==true){
                high--;
            }else if(tolower(int(s[low]))==tolower(int(s[high]))){
                low++;
                high--;
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
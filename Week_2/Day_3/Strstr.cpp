class Solution {
public:
    int strStr(string haystack, string needle) {
        int result = haystack.find(needle);//paaji ina nu find function kehnde si 
        if(result==haystack.size()){
            return -1;
        }else{
            return result;
        }
    }
};
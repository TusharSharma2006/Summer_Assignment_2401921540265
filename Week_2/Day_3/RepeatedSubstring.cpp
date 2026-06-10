class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.length();
        for(int i = 1;i<=n/2;i++){
            string meow = s.substr(0,i);//created substring
            string temp = meow; //stored substring into another string
            int m = meow.length();//stored initial length of our substr
            if(n % m != 0) continue;//if not possible
            while(m<s.length()){
                m+=temp.length();//adding length of substr each time 
                meow+=temp; //addng substr as well
            }
            if(m==n&&meow==s){
                return true;//returns true if it matches to the originl str
            }
        }
        return false;//returns false if not satisfied
    }
};
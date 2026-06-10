class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;//agr length of s2 length of s1 se chhoti hui toh false
        }
        vector<int>freq1(26,0);//for s1 freq...^-^
        vector<int>freq2(26,0);//for window's freq veere...
        int k = s1.length();
        
        int i = 0;
        int j = k-1;
        for(char ch:s1){
            freq1[ch-'a']++; //s1 ke chars ki freq store kri
        }
        for(int m = i;m<=j;m++){
            freq2[s2[m]-'a']++;//window ke chars ki freq store kri fer...
        }
        while(j<s2.length()-1){
            if(freq1==freq2){
                return true;//kyoki khali true aur false return krne ko bola 
            }else{
                freq2[s2[i++]-'a']--; //ab ye toh tum khud hi jaano paaji  ^-^ !!
                freq2[s2[++j]-'a']++;// ye wala rightmost element of window ki freq updte krega 
            }
        }
        return freq1==freq2; //ye last case check krn vaaste 
    }
};
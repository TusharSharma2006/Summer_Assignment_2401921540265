class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        
        if(s.length()<p.length()){
            return {}; //Oji paaji agar s chhoti hui toh return krenge empty vector
        }
        
        int k = p.length();
        
        vector<int>freq1(26,0);//ae p ke chars ki freq store krega
        vector<int>freq2(26,0);//ae window ke chars ki
        
        for(char ch : p){
            freq1[ch-'a']++;  // pehle p ke chars ki frequency store kri
        }
        int i = 0;
        int j = k-1;
        for(int i = 0;i<k;i++){
            freq2[s[i]-'a']++; //fer uss particular window ke andr jo elements hain unki
        }
        
        while(j < s.size()-1){
            if(freq1 == freq2){
                result.push_back(i);
            }
            freq2[s[i++]-'a']--; //deleted theeeeee leftmosssssssst element of window
            freq2[s[++j]-'a']++; //added the rightmossssssst element of the window
        }

        if(freq1 == freq2){result.push_back(i);}//last case handling

        return result;

    }
};
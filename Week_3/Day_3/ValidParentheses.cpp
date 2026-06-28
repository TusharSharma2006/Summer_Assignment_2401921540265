class Solution {
public:

    bool isValid(string s) {
        stack<char> st;
    
        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
        
            }else if(s[i]=='['){
                st.push('[');
            
            }
            else if(s[i]=='{'){
                st.push('{');
            }else{
                if(st.empty()==true) return false;

            if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
            
                }
                else{return false;}
            }
            else if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
            
                }
                else{return false;}
            }
            else if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }else
                {return false;}
            }
            }
        }
        return(st.empty()==true);
    }
};
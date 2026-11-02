class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()%2 !=0) return false;
        for(const auto& ch:s){
            if(ch == '[' || ch == '{' ||ch == '('){
                st.push(ch);
                continue;
            }
            else if(ch == ']' || ch == '}' ||ch == ')'){
                if(st.size()==0) return false;
                char topChar = st.top();
                if (topChar == '[' && ch==']'){
                    st.pop();
                }
                else if(topChar == '{' && ch =='}'){
                    st.pop();
                }
                else if(topChar == '(' && ch == ')'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
       if(st.size()>0){
        return false;
       }
       return true;
    }
};

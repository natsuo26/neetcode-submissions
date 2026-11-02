class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp = {
            {'}','{'},
            {']','['},
            {')','('}
        };

        for (const auto& ch: s){
            if(mp.count(ch)){
                if(!st.empty()&&st.top()==mp[ch]){
                    st.pop();
                }else{
                    return false;
                }
            }
            else{
                st.push(ch);
            }
        }

        return st.empty();
    }
};

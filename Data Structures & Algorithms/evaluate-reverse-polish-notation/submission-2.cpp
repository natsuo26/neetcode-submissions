class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(const auto& str: tokens){
            if(str=="+" || str =="-" || str =="*" || str=="/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if(str=="+"){
                    st.push(num1+num2);
                    continue;
                }
                else if( str == "-"){
                    st.push(num2-num1);
                    continue;
                }
                else if( str == "*"){
                    st.push(num1*num2);
                    continue;
                }
                else if( str == "/"){
                    st.push(num2/num1);
                    continue;
                }
                
            }
            int num = stoi(str);
            st.push(num);
        }

        return st.top();
    }
};

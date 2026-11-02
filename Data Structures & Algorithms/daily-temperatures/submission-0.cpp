class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        stack<pair<int,int>> st;

        for(int i=0;i<temperatures.size();i++){
            int temp = temperatures[i];
            while(!st.empty() > 0 && st.top().first < temp){
                result[st.top().second]=i-st.top().second;
                st.pop();
            }
            st.push(make_pair(temp,i));
        }
        return result;
    }
};

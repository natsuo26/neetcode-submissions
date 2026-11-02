class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i=0;i<temperatures.size();i++){
            int days = 0;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[i]<temperatures[j]){
                    days=j-i;
                    break;
                }
            }
            ans.push_back(days);
        }
        return ans;
    }
};

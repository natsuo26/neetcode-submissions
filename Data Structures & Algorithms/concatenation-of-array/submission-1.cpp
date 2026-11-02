class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int> ans = vector<int>(nums);
       for(auto num : nums){
        ans.push_back(num);
       }
       return ans;
    }
};
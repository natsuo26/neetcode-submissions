class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //lets go for simple approach we want to make 2n array 
        //the returned array items are duplicated
        vector<int> result;
        int n = nums.size();

        for(int i = 0;i<=n-1; i++){
            result.push_back(nums[i]);
        }
        for(int i = 0;i<=n-1;i++){
            result.push_back(nums[i]);
        }

        return result;
    }
};
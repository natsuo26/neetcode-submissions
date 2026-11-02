class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> countMap;
        for(int i=0;i<nums.size();i++){
            if(countMap.find(nums[i])==countMap.end()){
                countMap[nums[i]]++;
            }else{
                return true;
            }
        }
        return false;
    }
};
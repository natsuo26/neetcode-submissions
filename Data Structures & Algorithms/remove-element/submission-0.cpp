class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int occurance = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == val){
               nums[i] = INT_MAX;
                occurance++;
            }
        }
        int k = nums.size()-occurance;
        sort(nums.begin(),nums.end());
        return k;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> freqMap;
       for(const auto& num:nums){
        freqMap[num]++;
       } 
       int condition = nums.size()/2;
        for(const auto& it: freqMap){
            if(it.second>condition){
                return it.first;
            }
        }
        return 0; 
    }
};
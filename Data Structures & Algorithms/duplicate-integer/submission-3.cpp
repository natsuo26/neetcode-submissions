class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> freqMap;
       for(auto num:nums){
        freqMap[num]++;
        if(freqMap.find(num)!= freqMap.end() && freqMap.at(num)>1){
            return true;
        } 
       } 
       return false;
    }
};
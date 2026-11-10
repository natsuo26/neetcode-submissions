class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> uniqueNums;

        for(auto const& num:nums){
            uniqueNums.insert(num);
        }

        //find all start points by checking if num-1 exist in the set;
        std::vector<int> startingNums;
        for(int num:nums){
            if(uniqueNums.count(num-1) == 0){
                startingNums.push_back(num);
            }
        }

        int longestSequenceCount = INT_MIN;

        for(int i = 0;i<startingNums.size();i++){
            int currentIterSeqSize = 0;
            while(uniqueNums.count(startingNums[i]+currentIterSeqSize) == 1){
                currentIterSeqSize++;
            }
            longestSequenceCount = std::max(longestSequenceCount, currentIterSeqSize);
        }

        return longestSequenceCount == INT_MIN? 0: longestSequenceCount ;
    }
};

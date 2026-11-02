class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> numbers;
        for(const auto& num : nums){
            numbers[num]++;
        }

        vector<pair<int,int>> frequency;
        for(const auto& number:numbers){
            frequency.push_back({number.second, number.first});
        }

        sort(frequency.rbegin(),frequency.rend());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(frequency[i].second);
        }
        return res;
    }
};

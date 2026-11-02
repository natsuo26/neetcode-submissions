class Solution {
   public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sFreq;
        std::unordered_map<char, int> tFreq;

        if (s.size() != t.size()) return false;

        for (const auto& ch : s) {
            sFreq[ch]++;
        }

        for (const auto& ch : t) {
            tFreq[ch]++;
        }

        if (sFreq.size() != tFreq.size()) return false;

        for (const auto it : tFreq) {
            cout << it.first << " : " << it.second << endl;

            if (sFreq.find(it.first) == sFreq.end()) {
                cout<<"false in first check"<<endl;
                return false;
            }
            if (sFreq.find(it.first) != sFreq.end() && sFreq[it.first] != it.second) {
                cout<<"false in second check"<<endl;
                return false;
            }
        }

        return true;
    }
};

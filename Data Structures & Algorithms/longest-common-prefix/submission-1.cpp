class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       //finding out the size of the smallest string
       string ans="";
       for(int i=0;i<strs[0].size();i++){
        for(const auto& str:strs){
            cout<<"checking index: "<<i<<" char: "<<str[i]<<" compared to : "<< strs[0][i]<<endl;
            if(i==strs[0].size() || str[i]!=strs[0][i]){
                cout<<" i "<<i<<" size: "<< strs.size()<<endl;
                cout<< " fail case "<< "str[i] "<<str[i]<< " strs[0][i] "<<strs[0][i]<<endl;
                return ans;
            }
        } 
        ans=ans+strs[0][i];
       }
    }
};
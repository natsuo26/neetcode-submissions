class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int rightArray[nums.size()];
        fill(rightArray, rightArray + nums.size(), 1);
        rightArray[0]=nums[0];
        for(int i=1;i< nums.size();i++){
            rightArray[i]=rightArray[i-1]*nums[i];
        }

        int leftArray[nums.size()];
        fill(leftArray, leftArray + nums.size(), 1);
        leftArray[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            leftArray[i]=leftArray[i+1]*nums[i];
        }

        // right shift
        for(int i=nums.size()-1;i>0;i--){
            rightArray[i]=rightArray[i-1];
        }
        rightArray[0]=1;
        
        for(int i=0;i<nums.size();i++)
            cout<<rightArray[i]<<" ";

        cout<<endl;
        // left shift
        for(int i=0;i<nums.size()-1;++i){
            leftArray[i]=leftArray[i+1];
        }
        leftArray[nums.size()-1]=1;

        for(int i=0;i<nums.size();i++)
            cout<<leftArray[i]<<" ";
        vector<int> result;
        for(int i = 0;i< nums.size() ; i++){
            result.push_back(leftArray[i]*rightArray[i]);
        }
        return result;
    }
};

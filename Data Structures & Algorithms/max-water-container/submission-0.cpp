class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxWater = -1;
        while(i<j){
            int currWater = (j-i)*(min(heights[i],heights[j]));
            maxWater=max(maxWater,currWater);
            if(heights[i]>heights[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxWater;
    }
};

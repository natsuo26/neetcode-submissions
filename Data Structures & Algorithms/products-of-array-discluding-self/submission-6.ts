class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums: number[]): number[] {
        const n = nums.length;
        const output = new Array(n);

        output[0]=1;
        for(let i=1 ;i < n; i++){
            output[i]=output[i-1]*nums[i-1];
        }

        let suffix = 1; //right of nums[i-1] is nothing so product is 1 in suffix
        for(let i = n-1;i>=0;i--){
            output[i]*=suffix;
            suffix*=nums[i];
        }

        return output;
    }
}

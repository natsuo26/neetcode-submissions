class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums: number[]): number[] {
        if (nums.length === 2) {
            return [nums[1], nums[0]];
        }

        let leftProductArray = []
        nums.forEach((_, idx) => {
            if (idx === 0) {
                return leftProductArray.push(1);
            }
            leftProductArray.push(leftProductArray[idx - 1] * nums[idx - 1]);
        });
        const reversedNums = [...nums].reverse();

        let reversedRightProductArray = []
        reversedNums.forEach((_,idx)=>{
            if(idx === 0){
                return reversedRightProductArray.push(1);
            }
            reversedRightProductArray.push(reversedRightProductArray[idx-1]*reversedNums[idx-1]);
        })

        let rightProductArray = [...reversedRightProductArray].reverse();

        console.log(rightProductArray)

        return rightProductArray.map((rightNum, idx)=>{
            return rightNum*leftProductArray[idx];
        })
    }
}

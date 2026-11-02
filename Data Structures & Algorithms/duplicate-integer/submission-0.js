class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const numsCount = {};
        for(let num of nums){
            numsCount[num] = numsCount[num]?numsCount[num]+1:1;
        };

        for(let pair in numsCount){
            if(numsCount[pair]>1) return true;
        };

        return false;
    }
}

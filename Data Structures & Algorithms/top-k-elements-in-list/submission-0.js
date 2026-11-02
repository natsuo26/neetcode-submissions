class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        const frequencyMap={};
        for(let num of nums){
            if(!frequencyMap[num]){
                frequencyMap[num] = 1;
            }
            else{
                frequencyMap[num]++;
            }
        }

        const sortedFreqArray = Object.entries(frequencyMap).sort((a,b)=>b[1]-a[1]);
        console.log(sortedFreqArray);
        return sortedFreqArray.slice(0,k).map(([key])=>key); 
        // frequencyMap.forEach((key,value)={
            
        // })
    }
}

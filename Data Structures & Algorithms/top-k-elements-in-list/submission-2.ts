class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums: number[], k: number): number[] {
        let mp = new Map<number,number>();

        nums.forEach(num=>{
            mp.set(num,(mp.get(num)??0) + 1)
        });
        
        let kvPairs = [...mp.entries()].sort((a,b)=>b[1]-a[1]);

        return kvPairs.splice(0,k).map(pair=>pair[0]);
    }
}

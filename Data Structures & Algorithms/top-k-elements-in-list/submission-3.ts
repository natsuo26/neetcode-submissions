class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums: number[], k: number): number[] {
         const count = new Map<number, number>();
        for (const num of nums) {
            count.set(num, (count.get(num) ?? 0) + 1);
        }
         // buckets[f] = numbers with frequency f
        const buckets: number[][] = Array.from({ length: nums.length + 1 }, () => []);
        for (const [num, freq] of count) {
            buckets[freq].push(num);
        }

        const result: number[] = [];
        for (let f = buckets.length - 1; f > 0; f--) {
            for (const num of buckets[f]) {
                result.push(num);
                if (result.length === k) return result;
            }
        }
        return result;
    }
}

class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {
        // const post = new Array(nums.length).fill(1);
        // const pre = new Array(nums.length).fill(1);

        // post[nums.length-1]=nums[nums.length-1];
        // for(let i=nums.length-2;i>=0;i--){
        //     post[i]=post[i+1]*nums[i];
        // }
        // post.push(1);
        // post.unshift(1);

        // pre[0]=nums[0];
        // for(let i=1;i<nums.length;i++){
        //     pre[i]=pre[i-1]*nums[i];
        // }
        // pre.push(1);
        // pre.unshift(1);
        
        // const res =[];
        // for(let i=1;i<pre.length-1;i++){
        //      console.log(pre[i-1]+" * "+post[i+1]);
        //     console.log()
        //     res.push(pre[i-1]*post[i+1]);
        // }
        // // console.log(pre);
        // // console.log(post);
        // // console.log(res);

        // return res


        const res = new Array(nums.length).fill(1);
        let prefix = 1;
        for(let i = 0;i<nums.length;i++){
            res[i] = prefix;
            prefix*=nums[i];
        }
        
        let postfix = 1;
        for(let i=nums.length-1;i>=0;i--){
            res[i]=postfix*res[i];
            postfix*=nums[i];
        }
        
        return res;
    }
}

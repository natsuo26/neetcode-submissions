class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs){
    const wordMap= {};
    for(let word of strs){
        const count = new Array(26).fill(0);
        for(let characters of word){
            count[characters.charCodeAt(0)-'a'.charCodeAt(0)]+=1;
        }
        const key = count.join(',');
        if(!wordMap[key]){
            wordMap[key] = [];
        }
        wordMap[key].push(word);
    }
    return Object.values(wordMap);
    }
}

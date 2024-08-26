/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    
    // use Set for lookup

    const numsSet = new Set(nums)

    let count = 0
    let sequence = 0
    for(let i = 0;i < nums.length;i++){

        if(!numsSet.has(nums[i]-1)){

            while(numsSet.has(nums[i] + count)){
                count++;
            }


            sequence = Math.max(count, sequence)
            count = 0
        }
    }

    return sequence


};
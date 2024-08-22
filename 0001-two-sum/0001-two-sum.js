/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    const numMap = new Map()

    // check if difference of target - nums[i] exists in map
    // if it does, we found a match => [i, numMap.get(target-nums[i])]
    // if it doesn't, add it to map

    for(let i = 0;i < nums.length;i++){

        let difference = target - nums[i]

        console.log(difference)

        if(numMap.get(difference) !== undefined){
            return [i, numMap.get(difference)]
        }

        numMap.set(nums[i], i)

    }



};
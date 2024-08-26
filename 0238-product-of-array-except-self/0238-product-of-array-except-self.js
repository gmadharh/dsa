/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    
    let output = new Array(nums.length)
    output.fill(1)
    
    let prefix = output[0]
    for(let i = 0;i < nums.length;i++){
        output[i] = prefix
        prefix *= nums[i]
    }

    let postfix = 1
    for(let i = nums.length-1;i >= 0;i--){
        output[i] *= postfix
        postfix *= nums[i]
    }

    return output
};
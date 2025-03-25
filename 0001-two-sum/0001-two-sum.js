/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var i, j;

    const no = nums.length;
    loop1: for(i=0; i<no; i++){
        for(j=0; (j<no) && (i>j); j++){
            if( (nums[i]+nums[j]) == target ){
                break loop1;
            }
        }
    }
    return [ j, i ];
};
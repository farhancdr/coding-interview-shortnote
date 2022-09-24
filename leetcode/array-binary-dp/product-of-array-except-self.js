/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var productExceptSelf = function(nums) {
  let ans = [];
  let pref = 1;
  for(let i=0;i<nums.length;++i){
    ans[i] = pref;
    pref*=nums[i];
  }
  let post =1;
  for(let i=nums.length-1;i>=0; --i){
    
    ans[i] = ans[i] * post;
    post*=nums[i];
  }  
  return ans;
};

// [1,2,3,4]
// [1, 1, 2, 6]
// [24,12,4,1]
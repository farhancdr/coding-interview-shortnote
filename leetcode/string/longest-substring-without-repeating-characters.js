/**
 * @param {string} s
 * @return {number}
 */

var lengthOfLongestSubstring = function (s) {
  const set = new Set();
  let ans = 0;
  let i = 0;
  let j = 0;
  while (i < s.length && j < s.length) {
    if (!set.has(s[j])) {
      set.add(s[j]);
      j++;
      ans = Math.max(ans, j - i);
    } else {
      set.delete(s[i]);
      i++;
    }
  }
  return ans;
};

function countPalindromesOptimized(str){
  let count = 0;
  for(let i = 0; i < str.length; i++){
    count += countPalindromesFrom(str,i,i); //odd length palindromes
    count += countPalindromesFrom(str,i,i+1); //even length palindromes
  }
  return count;
}

function countPalindromesFrom(str, left, right){
  let count = 0;
  while(left >= 0 && right < str.length && str[left] === str[right]){
    count++;
    left--;
    right++;
  }
  return count;
}

console.log(countPalindromesOptimized("aabac"));
console.log(countPalindromesOptimized("abcde"));
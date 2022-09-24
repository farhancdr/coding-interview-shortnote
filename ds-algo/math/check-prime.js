//generate prime from 1 to n
function generatePrime(n) {
  let prime = [];
  for (let i = 2; i <= n; i++) {
    if (isPrime(i)) {
      prime.push(i);
    }
  }
  return prime;
}

function isPrime(n) {
  for (let i = 2; i*i <= n; i++) {
    if (n % i === 0) {
      return false;
    }
  }
  return true;
}
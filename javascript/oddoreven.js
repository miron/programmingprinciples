/*function isEven(number){
    for (number; number >=-2; number = number - 2){
        if (number == 1 ||number == -1 ) return false;
        else if (number == 0 || number == -2 ) return true;
      }
  }
console.log(isEven(0));
// → true
console.log(isEven(1));
// → false
console.log(isEven(-2));
// → ??
*/

function isEven(n) {
  if (n == 0) return true;
  else if (n == 1) return false;
  else if (n < 0) return isEven(-n);
  else return isEven(n - 2);
}

console.log(isEven(50));
// → true
console.log(isEven(75));
// → false
console.log(isEven(-1));
// → false
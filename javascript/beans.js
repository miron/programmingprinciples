// Your code here.

function countBs(string) {
    let count = 0;
    for (let i=0; i<string.length; i++){
      if (string[i] == "B")
        count++
    }
    return count;
  }
  function countChar(string, letter) {
    let count = 0;
    for (let i=0; i<string.length; i++){
      if (string[i] == letter)
        count++
    }
    return count;
  }
  console.log(countBs("BBBC"));
  // → 2
  console.log(countChar("kakkerlak", "k"));
  // → 4
tmp:
first = " "
second = "#"
pattern = "";
size = 64;
for (let n = 1; n <= size; n++) {
    if (n % 2 == 0) pattern+= second;
    else pattern+= first; 
    if (n % Math.sqrt(size)/2 == 0) {
        pattern += "\n";
        tmp = first; 
        first = second;
        second = tmp;
    }

}
console.log(pattern)



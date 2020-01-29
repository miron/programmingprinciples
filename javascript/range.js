function range(start, end, step){
    let array = [];
    let j = start;
    step < 0 ? step = -step : {}
    step == null ? step = 1 : {};
    if (start < end) { 
        for (let i=0; i<=(end-start)/step; i++){
            array[i]= j;
            j+=step;
        }
    } 
    else {
        for (let i=0; i<=(start-end)/step; i++){
            array[i]= j;
            j-=step;
        }

    }
    return array
}

function sum(array){
    let sum = 0;
    for (let entry of array) {
        sum+=entry;

    }
    return sum;

}

console.log(sum(range(1, 10)));
console.log(range(5, 2, -1));
function reverseArray(array){
    let revarray=[];
    for (let i = array.length-1; i >=0; i--){
        revarray.push(array[i])
    }
 return revarray;   
}
function ReverseArrayInPlace(array){
    arrayValue =[];
    for (let i = array.length-1; i >=0; i--)
        arrayValue.push(array[i])

}
//let spatzi = ["A", "B", "C"];
//reverseArray(spatzi);
//console.log(spatzi);
console.log(reverseArray(["A", "B", "C"]))
let arrayValue = [1, 2, 3, 4, 5];
ReverseArrayInPlace(arrayValue);
console.log(arrayValue);
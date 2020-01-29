function arrayToList(array){
    let list = null
    for(let i = array.length-1; i >=0; i--)
        list = {
        value: array[i], rest: list
        }
    return list;
}
function listToArray(list){
    let array = [];
    let i=0;
    for( let node = list; node; node = node.rest){
    array[i]=node.value;
    i++
    }
    return array;
}
function nth(list, element){
    let array = [];
    let i=0;
    for(let node = list; node; node = node.rest){
    array[i]=node.value;
    if(i == element) return array[i];
    i++
    }

}
function prepend(element, list ){
    return list = {value: element, rest: list}
}



console.log(arrayToList([10, 20]));
console.log(listToArray(arrayToList([10, 20, 30])))
console.log(prepend(10, prepend(20, null)));
console.log(nth(arrayToList([10, 20, 30]), 1));
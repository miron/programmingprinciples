function deepEqual(x, y){
    if((typeof x == "object" && x != null) && (typeof y == "object" && y !=0)){
        if (Object.keys(x).length == Object.keys(y).length)  {
            for (let entry of Object.keys(x)){
                let a = JSON.stringify(x[entry]), b = JSON.stringify(y[entry]);
                if (a != b ){
                    return false;
                }    
            }
            return true;
        } 
        else return false;
    }
    else return x === y;
}





let obj = {here: {is: "an"}, object: 2};
console.log(deepEqual(obj, obj));
// --> true
console.log(deepEqual(obj, {here: 1, object: 2}));
// --> false
console.log(deepEqual(obj, {here: {is: "an"}, object: 2}));
// --> true
console.log(deepEqual(1,2))

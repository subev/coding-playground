function findSmallestNumber(arr, from, to) {
    if (from >= to) {
        return arr[to];
    }
    var midIndex = ~~((to+from)/2);
    var middle = arr[midIndex];
    if (middle > arr[to]) {
        return findSmallestNumber(arr, midIndex + 1, to);
    } else {
        return findSmallestNumber(arr, from, midIndex);
    }
}


var array = [8,9, 10, 11, 12, 13, 14, 15, 1, 2, 3, 4, 5, 6, 7];
var result = findSmallestNumber(array, 0, array.length-1);
console.log("result:  " + result);
var array = [8,9, 10, 11, 12, 13, 14, 15 , 16, 1, 2, 3, 4, 5, 6, 7];
var result = findSmallestNumber(array, 0, array.length-1);
console.log("result:  " + result);
var array = [8,9, 10, 11, 1, 2, 3, 4, 5, 6, 7];
var result = findSmallestNumber(array, 0, array.length-1);
console.log("result:  " + result);
var array = [1, 2, 3, 4, 5, 6, 7];
var result = findSmallestNumber(array, 0, array.length-1);
console.log("result:  " + result);
var array = [1, 2, 3, 4, 5, 6, 7, 0];
var result = findSmallestNumber(array, 0, array.length-1);
console.log("result:  " + result);

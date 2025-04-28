function myfunction(arr){
    const res={};
    for (let i = 0; i < arr.length; i++) {
        const element = arr[i];
        if (res[element]) {
            res[element]++;
        } else {
            res[element] = 1;
        }

    }
    return res;
}
console.log(myfunction([1,2,2,3]));
console.log(myfunction([9,9,9,99]));
console.log(myfunction([4,3,2,1]));
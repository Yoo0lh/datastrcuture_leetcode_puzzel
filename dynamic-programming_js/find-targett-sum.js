const canSum = (find, nums, memo={}) =>{
    if(find in memo) return true; 
    if (find === 0) return true;
    if (find < 0) return false ;
    for (let n of nums){
        const reminder = find - n;
        if (canSum(reminder, nums, memo) === true) {
            memo[find] = true;
            return true;
        }
    }  
    memo[find] = true;
    return false ;
};
console.log(canSum(7, [2,3]));
console.log(canSum(7, [3,4,7]));
console.log(canSum(300,[7,14]));
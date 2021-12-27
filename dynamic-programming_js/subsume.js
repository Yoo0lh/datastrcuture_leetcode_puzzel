const subSum = (find, nums, memo = {}) =>{ 
    if (find in memo) return memo[find];
    if (find === 0) return [];
    if (find < 0) return null;
    for (let n of nums){
        const remainder = find - n;
        const res = subSum(remainder, nums, memo);
        if(res !== null){
            memo[find] = [ ...res, n ];
            return memo[find];
        }
    }
    memo[find] = null;
    return null;
};
console.log(subSum(7,[2,3]));
console.log(subSum(4, [3,4,1]));
console.log(subSum(8, [2,3,5]));
console.log(subSum(300, [7,14]));
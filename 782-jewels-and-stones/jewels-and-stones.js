/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    const mp=new Map();
    for(let i=0;i<stones.length;i++){
        mp.set(stones[i],(mp.get(stones[i])||0)+1);
    }
    let count=0;
    for(let j=0;j<jewels.length;j++){
        count +=mp.get(jewels[j])||0;
    }
    return count;
};
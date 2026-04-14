/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {
    let flag=0;
    let count=0;
    for(let i=0;i<s.length;i++){
        if(s[i]=='R')flag-=1;
        else flag+=1;
        if(flag==0)count++;
    }
    return count;
};
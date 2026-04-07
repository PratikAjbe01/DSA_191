/**
 * @param {string} s
 * @return {boolean}
 */

var twoPointer=function(s){
  let low=0;
  let high=s.length-1;
  while(low<=high){
    if(s[low]!=s[high])return false;
    low++;
    high--;
  }
  return true;
}
function isAlphaNumeric(char){
    const code=char.charCodeAt(0);
    return (code >= 65 && code <= 90) || (code >= 97 && code <= 122)|| (code >= 48 && code <= 57);
}
var isPalindrome = function(s) {
    let str="";
    for(let i=0;i<s.length;i++){
        if(isAlphaNumeric(s[i]))str=str+s[i];
    }
     return twoPointer(str.toLowerCase());
};
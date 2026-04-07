/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
  if(strs.length==1)return strs[0];
  let  str1=strs.sort();
  let first=str1[0];
  let last= str1[str1.length-1];
  let ans="";
  for(let i=0;i<first.length;i++){
    if(first[i]!==last[i])return ans;
    else ans +=first[i];
  }
  return ans;
};
/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let mp={};
    for(let i=0;i<strs.length;i++){
        let str=strs[i].split('').sort().join('');
        if(!mp[str]){
            mp[str]=[strs[i]];
        }else mp[str].push(strs[i]);
    }
    return Object.values(mp);
};
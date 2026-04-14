/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    let mpStoT={};
    let mpTtoS={};
    for(let i=0;i<s.length;i++){
        if(!mpStoT[s[i]]&&!mpTtoS[t[i]]){
            mpStoT[s[i]]=t[i];
            mpTtoS[t[i]]=s[i];
        }else if(mpStoT[s[i]]!==t[i]||mpTtoS[t[i]]!==s[i]){
            return false;
        }
    }
    return true;
};
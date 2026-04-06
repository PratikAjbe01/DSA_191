/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    const mp=new Map();
    for(let i=0;i<s.length;i++){
        mp.set(s[i],(mp.get(s[i])||0)+1);
    }
 
    let maxi1=0;
    let maxi2=0;
    for(const [key,value] of mp){
        if(key=='a'||key=='e'||key=='i'||key=='o'||key=='u'){
         if((value||0)>maxi1){
            maxi1=value;
         }
        }else{
            if((value||0)>maxi2){
            maxi2=value;
         }
        }
    }
    return maxi1+maxi2;
};
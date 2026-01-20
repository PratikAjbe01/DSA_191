class Solution {
public:
    bool isAnagram(string s, string t) {
    int n1=s.size();
    int n2=t.size();
    if(n1!=n2)return false;
    vector<int>mp(26,0);
    for(int i=0;i<n1;i++){
        mp[s[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        if(mp[t[i]-'a']!=0){
            mp[t[i]-'a']--;
        }else{
            mp[t[i]-'a']++;
        }
    } 
    for(int i=0;i<mp.size();i++){
        if(mp[i]!=0)return false;
    }   
    return true;
    }
};
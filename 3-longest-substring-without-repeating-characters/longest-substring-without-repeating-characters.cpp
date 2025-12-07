class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=0;
        map<char,int>mp;
        int i=0;
        for(int j=0;j<n;j++){
            if(mp.find(s[j])!=mp.end()){
                i=max(mp[s[j]]+1,i);
            }
            
            len=max(j-i+1,len);
            mp[s[j]]=j;
        }
        return len;
    }
};
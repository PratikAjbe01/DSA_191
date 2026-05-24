class Solution {
public:
    bool isPalindrome(string s, int low, int high ){
        while(low<=high){
            if(s[low++]!=s[high--])return false;
        }
        return true;
    }
    void strSet(string&s,vector<vector<string>>&ans,vector<string>& temp, int i){
    if(i==s.size()){
        ans.push_back(temp);
        return;
    }
    for(int j=i;j<s.size();j++){
        if(isPalindrome(s,i,j)){
            temp.push_back(s.substr(i,j-i+1));
            strSet(s,ans,temp,j+1);
            temp.pop_back();
        }
    }
    }
    vector<vector<string>> partition(string s) {
    int n=s.size();
    vector<vector<string>>ans;
    vector<string>temp;
    strSet(s,ans,temp,0);
    return ans;
    }
};
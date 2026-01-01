class Solution {
public:
  void sortStringsBySize(vector<string>& strings) {
    sort(strings.begin(), strings.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
}

string longestCommonPrefix(vector<string>& strs) {
    sortStringsBySize(strs); 
    string match = strs[0];
    for (int j = 1; j < strs.size(); j++) {
        string ind = strs[j];
        string newMatch = "";
        for (int i = 0; i < ind.size(); i++) {
            if ((i == 0) && (match[i] != ind[i])) {
                return "";
            }
            if (match[i] == ind[i]) {
                newMatch = newMatch + ind[i];
            } else {
                match = newMatch;
                break;
            }
        }
    }
    return match;
}
};
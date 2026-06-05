class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        // iterate through first string and create a frequency map
        // iterate through second string, if char is present in first map
        // decrease the count
        // if count is less than 0, return false. Else return true.

        if (s.size() != t.size()) {
            return false;
        }
        for (int i = 0; i < s.size(); i++) {
            s_map[s[i]]++;
        }

        for (int j = 0; j < t.size(); j++) {
            if (s_map.find(t[j]) != s_map.end()) {
                s_map[t[j]]--;

                if (s_map[t[j]] < 0) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> final_vector;
    for (int i = 0; i < strs.size(); i++) {
        vector<string> temp;
        temp.push_back(strs[i]);
        for (int j = i + 1; j < strs.size();) {
            // cout<< strs[i] << " " << strs[j] << endl;
            bool res = isAnagram(strs[i], strs[j]);
            // cout << "res " << res<< endl;
            if (res) {
                temp.push_back(strs[j]);
                strs.erase(strs.begin() + j);
            } else {
                j++;
            }
        }
        final_vector.push_back(temp);
    }
    return final_vector;
}
};
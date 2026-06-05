class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> my_map;
    for(auto s : strs)
    {
        vector<int> count(26,0);
        for(char c:s)
        {
            count[c - 'a']++;
        }
        
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += to_string(count[i]) + "#";
        }
        my_map[key].push_back(s); 
    }
        vector<vector<string>> result;
    for (auto &it : my_map) {
        result.push_back(it.second);
    }
    return result;
}
};

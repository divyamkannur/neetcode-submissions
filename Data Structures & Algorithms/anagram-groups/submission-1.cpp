class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> my_map;
    for(auto elem : strs){
        string temp_key = elem;
        sort(temp_key.begin(), temp_key.end());
        my_map[temp_key].push_back(elem);
    }
    // for (auto &it : my_map) {
    //     cout << "Key: " << it.first << " -> ";
    //     for (auto &str : it.second) {
    //         cout << str << " ";
    //     }
    //     cout << endl;
    // }
    vector<vector<string>> result;
    for(auto it:my_map)
    {
        result.push_back(it.second);
    }
    return result;   
    }
};

class Solution {
public:

    vector<int> my_vec;
    string encode(vector<string>& strs) {
        string result_str;
        for(string elem: strs)
        {
            result_str= result_str + elem;
            my_vec.push_back(elem.size());
        }
        return result_str;
    }

    vector<string> decode(string s) {
        vector<string> str_vector;
        int left =0; int right =0; string substring;
        for(int elem: my_vec)
        {
            right = elem;
            substring = s.substr(left,right);
            str_vector.push_back(substring);
            left = left + right;
        }
        return str_vector;
    }
};

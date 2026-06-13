class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";

        for (auto elem : strs) {
            encoded_string += to_string(elem.size()) + "#" + elem;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_str;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int str_length = stoi(s.substr(i, j - i));
            cout << str_length << endl;
            string new_str = s.substr(j + 1, str_length);
            decoded_str.push_back(new_str);
            i = j + 1 + str_length;
        }
        return decoded_str;
    }
};

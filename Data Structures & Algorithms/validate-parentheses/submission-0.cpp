class Solution {
   public:
    bool isValid(string s) {
        // return false if the string as odd char
        if (s.size() % 2 != 0) {
            return false;
        }
        stack<char> st;
        unordered_map<char, char> my_map = {{'}', '{'}, {')', '('}, {']', '['}};
        for (char c : s) {
            if (my_map.count(c)) {
                if (st.empty() || st.top() != my_map[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};

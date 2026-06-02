class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        // iterate through first string and create a frequency map
        //iterate through second string, if char is present in first map
        // decrease the count
        //if count is less than 0, return false. Else return true.
        if(s.size()!=t.size())
        {
            return false;   
        }
        for(int i=0; i< s.size(); i++)
        {
           s_map[s[i]]++;
        }
        
        for(int j=0; j<t.size(); j++)
        {
           if(s_map.find(t[j])!=s_map.end())
           {
            s_map[t[j]]--;
            
            if(s_map[t[j]] < 0)
               {
                return false;
               }
           }
           else{ return false;}
        }
        return true;
    }
};

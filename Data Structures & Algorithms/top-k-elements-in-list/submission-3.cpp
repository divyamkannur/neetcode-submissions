class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
        //iterate through the array
        map<int, int> my_map;
        for(auto elem : nums)
        {
            // use hash map to store the frequency of occurance
            my_map[elem]++;
        }

        vector<int> result;
        map<int, vector<int>> new_map;
        for(auto it : my_map)
        {
            int number = it.first;
            int freq = it.second;
            new_map[freq].push_back(number);
        }
        for(auto it = new_map.rbegin(); it!=new_map.rend(); ++it)
        {
            for(int val:it->second)
            {
                result.push_back(val);   
            }
            if(result.size()==k)
                return result;
        }
    return {};
}
};

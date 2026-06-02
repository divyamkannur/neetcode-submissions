class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, int> my_map;

        for(int i=0; i<nums.size();i++)
        {
            if(my_map.find(nums[i]) != my_map.end())
            {
                return true;
            }
            else
            {
                my_map[nums[i]];
            }
        }
        return false;
    }
};
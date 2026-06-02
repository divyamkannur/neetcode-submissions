class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //iterate through the array and add in map
        // find the remainder
        // if remainder is present in map return indicies
        unordered_map<int, int> my_map;
        {
            for(int i=0; i<nums.size(); i++)
            {
                int remainder = target - nums[i];

                if(my_map.find(remainder)!= my_map.end())
                {
                    return{my_map[remainder], i};
                }
                my_map[nums[i]]=i;
            }
        } 
    }
};

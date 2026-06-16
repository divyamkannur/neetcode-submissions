class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        // sort the input array
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            int left = i+1;
            int right = nums.size()-1;

            // skip duplicates
            if((i>0) && (nums[i] == nums[i-1])){continue;}

            while(left < right)
            {
                int threesum = nums[i] + nums[left] + nums[right];
                if(threesum < 0)
                {
                    left++;
                }
                else if(threesum > 0)
                {
                    right--;
                }
                else
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    //skip the duplicates for left and right ptrs
                    while((left<right) && (nums[left] == nums[left-1])) left++;
                    while((left<right) && (nums[right] == nums[right+1])) right--;
                }
            }
        }
        return res;
    }
};

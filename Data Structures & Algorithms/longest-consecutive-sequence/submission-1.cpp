class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // if array is empty return 0
        if(nums.size()== 0)
        {
            return 0;
        }
        int len=1; int maxlen=1;
        for(int i=1; i< nums.size(); i++)
        {
            // if 2 consecutive numbers are same, skip
            if(nums[i]==nums[i-1]) continue;

            if(nums[i]- nums[i-1] == 1)
            {
                len++;
            }
            else
            {
                len =1;
            }
            if(len> maxlen){ maxlen = len;}
        }
        return maxlen;
        
    }
};

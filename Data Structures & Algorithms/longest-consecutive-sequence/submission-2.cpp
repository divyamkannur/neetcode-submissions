class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // if array is empty return 0
        if (nums.size() == 0) {
            return 0;
        }
        // initialize length and max length
        int len = 1;
        int maxlen = 1;
        for (int i = 1; i < nums.size(); i++) {
            // if 2 consecutive numbers are same, skip
            if (nums[i] == nums[i - 1]) continue;

            // if numbers are consequitive increment len
            if (nums[i] - nums[i - 1] == 1) {
                len++;
            } else {  // else reset the length
                len = 1;
            }
            // compute max len
            if (len > maxlen) {
                maxlen = len;
            }
        }
        return maxlen;
    }
};

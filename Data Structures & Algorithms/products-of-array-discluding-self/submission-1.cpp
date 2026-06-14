class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Initialize result array with 1s
        // res[i] will eventually hold the product of all elements except nums[i]
        int n = nums.size();
        vector<int> res(n, 1);

        // ----------- Prefix Pass -----------
        // prefix stores product of all elements to the left of current index
        int prefix = 1;
        for(int i=0; i< nums.size(); i++)
        {
            // Store prefix product for current index
            res[i]= prefix;
            // Update prefix for next iteration
            prefix = prefix * nums[i];
        }


        // ----------- Postfix Pass -----------
        // postfix stores product of all elements to the right of current index
        int postfix = 1;
        for(int i= nums.size()-1; i>=0; i--)
        {
            // Multiply existing prefix product with postfix product
            res[i] = res[i] * postfix;
            // Update postfix for next iteration
            postfix = postfix * nums[i];
        }
        return res;
    }
};

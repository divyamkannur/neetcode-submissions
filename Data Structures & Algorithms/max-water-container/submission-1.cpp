class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_store{0};
        while (left < right) {
            int height = (heights[left] < heights[right]) ? heights[left] : heights[right];
            int curr_store = height * (right - left);
            if (curr_store > max_store) {
                max_store = curr_store;
            }
            if(heights[left]<heights[right]){left++;}
            else{right--;}
        }
        return max_store;
    }
};

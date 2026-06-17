class Solution {
   public:
    int trap(vector<int>& height) {
        auto max = [](int a, int b) { return (a > b) ? a : b; };
        auto min = [](int a, int b) { return (a < b) ? a : b; };
        vector<int> maxleft;
        vector<int> maxright(height.size());
        vector<int> trapped_water;
        int total_trapped_water{0};
        maxleft.push_back(height[0]);
        maxright[height.size() - 1] = 0;
        // find the max left height
        for (int i = 1; i < height.size(); i++) {
            maxleft.push_back(max(maxleft[i - 1], height[i - 1]));
        }
        // find the max right height
        for (int i = height.size() - 2; i >= 0; i--) {
            maxright[i] = (max(maxright[i + 1], height[i + 1]));
        }

        // amount of water that can be trapped is min(L,R) -h[i] (height of the wall at each idx)
        // find the min of left and right wall
        for (int i = 0; i < height.size(); i++) {
            trapped_water.push_back((min(maxleft[i], maxright[i]) - height[i]));
        }
        for (auto elem : trapped_water) {
            if (elem > 0) {
                total_trapped_water = total_trapped_water + elem;
            }
        }
        // cout << total_trapped_water << " ";
        return total_trapped_water;
    }
};

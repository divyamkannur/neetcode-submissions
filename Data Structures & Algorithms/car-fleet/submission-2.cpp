class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        stack<double> st;
        for(int i=cars.size()-1; i>=0; i--){
            int pos = cars[i].first;
            int spd = cars[i].second;
            double timetaken = (double)(target - pos) / spd;
            if (st.empty() || timetaken > st.top()) {
                st.push(timetaken);
            }
        }
        return st.size();
    }
};

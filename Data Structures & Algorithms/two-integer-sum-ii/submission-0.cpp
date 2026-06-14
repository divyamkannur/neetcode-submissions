class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int, int> my_map;
    vector<int> res;
    for(int i=0; i<numbers.size(); i++)
    {
        int rem = target - numbers[i];
        //cout << "rem " << rem << endl;
        if(my_map.find(rem) != my_map.end())
        {
            //cout << i << my_map[rem] <<  endl;
            res.push_back(my_map[rem] +1);
            res.push_back(i+1);
            //return{i, my_map[rem]};
        }
        my_map[numbers[i]] = i;
    }
    return res;       
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows*cols -1;

        while(left<=right)
        {
            int mid = left+ (right-left)/2;
            int row = mid / cols;
            int col = mid % cols;
            int curr = matrix[row][col];

            if(target == curr){return true;}
            if(target> curr)
            {
                left = mid + 1;          
            }
            else
            {
                right = mid - 1; 
            }
        }
        return false;
    }
};

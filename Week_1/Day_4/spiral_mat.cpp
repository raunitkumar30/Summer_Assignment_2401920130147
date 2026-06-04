class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> result;
        int m=matrix.size();
        int n=matrix[0].size();
        int left_col=0,right_col=n-1,up_row=0,down_row=m-1;
        while(left_col <= right_col && up_row <= down_row)
        {
            for(int i=left_col;i<=right_col;i++)
            {
                int x=matrix[up_row][i];
                result.push_back(x);
            }
            up_row++;
            for(int i=up_row;i<=down_row;i++)
            {
                int x=matrix[i][right_col];
                result.push_back(x);
            }
            right_col--;
            for(int i=right_col;i>=left_col;i--)
            {
                int x=matrix[down_row][i];
                result.push_back(x);
            }
            down_row--;
            for(int i=down_row;i>=right_col;i++)
            {
                int x=matrix[i][left_col];
                result.push_back(x);
            }
        }
        return result;
    }
};

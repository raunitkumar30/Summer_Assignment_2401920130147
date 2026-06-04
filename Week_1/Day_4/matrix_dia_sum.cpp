class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int totalSum = 0;
        int n = mat.size();
        for (int i =0;i <n; i++) 
        {
            int primarye =mat[i][i];
            int secondarye= mat[i][n - 1 - i];
            totalSum =totalSum + primarye+ secondarye;
        }
        if (n % 2!= 0) {
            int middleIndex =n / 2;
            totalSum = totalSum - mat[middleIndex][middleIndex];
        }
        return totalSum;
    }
};

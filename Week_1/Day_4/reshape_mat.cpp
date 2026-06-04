class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int originalRows =mat.size();
        int originalColumns =mat[0].size();
        int totalElements= originalRows * originalColumns;
        int targetElements=(r * c);
        if (totalElements != targetElements) 
        {
            return mat;
        }
        vector<vector<int>>reshapedMatrix(r, vector<int>(c));
        int currentRow=0;
        int currentColumn= 0;
        for (int i =0;i <originalRows; i++) {
            for (int j= 0; j< originalColumns;j++) {
                reshapedMatrix[currentRow][currentColumn]= mat[i][j];
                currentColumn++;
                if (currentColumn== c) {
                    currentColumn= 0;
                    currentRow++;
                }
            }
        }
        
        return reshapedMatrix;
    }
};

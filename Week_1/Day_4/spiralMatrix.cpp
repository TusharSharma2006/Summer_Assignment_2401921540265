class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> res;

        int layers = (min(m, n) + 1) / 2;

        for (int i = 0; i < layers; i++) {

            for (int j = i; j < n - i; j++) {
                res.push_back(matrix[i][j]);
            }

            for (int k = i + 1; k < m - i; k++) {
                res.push_back(matrix[k][n - i - 1]);
            }

            if (m - i - 1 != i) {
                for (int j = n - i - 2; j >= i; j--) {
                    res.push_back(matrix[m - i - 1][j]);
                }
            }

            if (n - i - 1 != i) {
                for (int k = m - i - 2; k > i; k--) {
                    res.push_back(matrix[k][i]);
                }
            }
        }

        return res;
    }
};
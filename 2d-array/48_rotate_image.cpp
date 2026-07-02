class Solution {
public:
    void transpose(vector<vector<int>>& m, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) swap(m[i][j],m[j][i]);
        }
        return;
    }

    void reverseRow(vector<vector<int>>& m, int n) {
        for (int i = 0; i < n; i++) {
            reverse(m[i].begin(),m[i].end());
        }
        return;
    }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix,matrix.size());
        reverseRow(matrix,matrix.size());

        return;    
    }
};

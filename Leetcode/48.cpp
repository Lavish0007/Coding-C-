#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][n - 1 - i] = matrix[i][j];
        }
    }

    matrix = ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    for (auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    rotate(matrix);

    cout << "\nMatrix After 90 Degree Rotation:\n";
    for (auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

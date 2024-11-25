/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void setZeros(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<bool> rowFlag(rows, false);
    vector<bool> colFlag(cols, false);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                rowFlag[i] = true;
                colFlag[j] = true;
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (rowFlag[i] || colFlag[j])
                matrix[i][j] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    setZeros(matrix);
    for (const auto& row : matrix) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}

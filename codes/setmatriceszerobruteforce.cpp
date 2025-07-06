// SET MATRICES ZERO
// In this problem, we have to do
// for example: a matrix is given as:
// 1   1   1   1
// 1   0   0   1
// 1   1   0   1
// 1   1   1   1

// now according to question, 
// in the matrix where ever we find 0
// mark all the elements of that row and column 0

// so solution acc. to that:

// 1   0   0   1
// 0   0   0   0
// 0   0   0   0
// 1   0   0   1

// so now we will implement brute force solution and then we will mark the row and column element
// -1 instead of zero first to avoid confusion and then we will mark -1 elements to 0

#include <bits/stdc++.h>
using namespace std;

// Mark all columns in row 'i'
void markRow(vector<vector<int>> &mat, int i, int m) {
    for (int j = 0; j < m; j++) {
        if (mat[i][j] != 0)
            mat[i][j] = -1;
    }
}

// Mark all rows in column 'j'
void markCol(vector<vector<int>> &mat, int j, int n) {
    for (int i = 0; i < n; i++) {
        if (mat[i][j] != 0)
            mat[i][j] = -1;
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };

    int n = mat.size();      // rows
    int m = mat[0].size();   // columns

    // First pass to mark -1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 0) {
                markRow(mat, i, m);
                markCol(mat, j, n);
            }
        }
    }

    // Second pass to change all -1 to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == -1)
                mat[i][j] = 0;
        }
    }

    // Print final matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// it will take a complexity of n^3

